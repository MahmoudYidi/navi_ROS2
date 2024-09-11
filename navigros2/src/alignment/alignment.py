#!/usr/bin/env python3
import numpy as np
import time
from scipy import interpolate
import torch as t
from torchvision import transforms
import cv2
import os
import histogram



# Constants
PAD = 32
PEAK_MULT = 0.5
RESIZE_H = 320
RESIZE_W = 512

class Alignment:
    def __init__(self):
        self.method = "SIAM"
        self.traditionalMethods = ["SIFT", "SURF", "KAZE", "AKAZE", "BRISK", "ORB"]
        if self.method == "SIAM":
            self.device = t.device("cuda") if t.cuda.is_available() else t.device("cpu")
            from backends.siam_model import Siamese, load_model, get_parametrized_model
            model = get_parametrized_model(False, 3, 256, 0, 3, self.device)
            file_path = os.path.dirname(os.path.abspath(__file__))
            self.model = load_model(model, os.path.join(file_path, "backends/model_eunord.pt")).to(self.device)
            self.model.eval()
            self.to_tensor = transforms.ToTensor()
            self.resize = transforms.Resize(RESIZE_H)  # Corrected the resize dimensions
            print("Neural network successfully initialized!")

    def process(self, imgA, imgB):
        peak, uncertainty = 0, 0
        hist = []

        if self.method in self.traditionalMethods:
            from backends import traditional
            kpsA, desA = traditional.detect(imgA, self.method)
            kpsB, desB = traditional.detect(imgB, self.method)

            if kpsA is None or kpsB is None:
                return peak, 0, hist

            displacements = traditional.match(kpsA, desA, kpsB, desB)
            displacements = [int(x) for x in displacements]
            hist = histogram.slidingHist(displacements, 10)
            peak, n = histogram.getHistPeak(hist)

            # Prepare histogram for output
            yVals = [hist.get(x, 0) for x in range(min(hist), max(hist) + 1)]
            hist = yVals

            if n < 10:
                peak = 0

        elif self.method == "VGG":
            from backends import vgg
            if imgA.shape[-1] == 4:
                imgA = imgA[:, :, :3]
            peak, val, hist = vgg.align(imgA, imgB)

        elif self.method == "SIAM":
            with t.no_grad():
                start = time.time()
                curr_tensor = self.image_to_tensor(imgB)
                map_tensor = self.image_to_tensor(imgA)
                hist = self.model(map_tensor, curr_tensor, padding=PAD)
                hist_out = t.softmax(hist, dim=-1)
                hist = hist.cpu().numpy()
                f = interpolate.interp1d(np.linspace(0, RESIZE_W, hist.size), hist, kind="cubic")
                interp_hist = f(np.arange(0, RESIZE_W))
                peak = (np.argmax(interp_hist) - interp_hist.size / 2.0) * PEAK_MULT
                end = time.time()

        return peak, 0, hist

    def image_to_tensor(self, img):
        img = np.array(img)
        image_tensor = self.resize(self.to_tensor(img).unsqueeze(0)).to(self.device)
        return image_tensor

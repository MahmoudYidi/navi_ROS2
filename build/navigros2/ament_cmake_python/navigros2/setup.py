from setuptools import find_packages
from setuptools import setup

setup(
    name='navigros2',
    version='0.0.0',
    packages=find_packages(
        include=('navigros2', 'navigros2.*')),
)

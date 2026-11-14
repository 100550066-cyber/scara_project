from setuptools import find_packages
from setuptools import setup

setup(
    name='scara_description',
    version='0.0.1',
    packages=find_packages(
        include=('scara_description', 'scara_description.*')),
)

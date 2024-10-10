# setup.py
from setuptools import setup, Extension
import pybind11
import os

ext_modules = [
    Extension(
        'root_finding',
        sources=[
            'src/pybind_module.cpp',
            'src/BisectionMethod.cpp',
            'src/NewtonRaphsonMethod.cpp',
        ],
        include_dirs=[
            pybind11.get_include(),
            os.path.abspath('src')
        ],
        language='c++',
        extra_compile_args=['-std=c++11', '-fvisibility=hidden']
    ),
]

setup(
    name='root_finding',
    version='0.1',
    author='Muhammad Mubashar Shahzad',
    author_email='your.email@example.com',
    description='A root-finding library with Python bindings',
    ext_modules=ext_modules,
    install_requires=[
        'pybind11>=2.6.0',
    ],
)

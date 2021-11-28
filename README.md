# arrayfuncs
a kinda useless C++ clone of NumPy i made to practice C++

## Examples
You can find code snippets about the available functions from the `example.py` and the `example.cpp` files.

## Setup
You need to compile `arrayfuncs.cpp` with g++ in order to make the python file work correctly. If you, for no reason whatsoever want to use this library, you need to clone this repo and add your python files in the same directory as `arrayfuncs.cpp`. You also need to install `cppyy` in order to transform C++ to Python.
```
pip3 install cppyy
python3 example.py
```
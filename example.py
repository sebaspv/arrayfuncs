'''
Example file to show the pythonization of arrayfuncs and its functions
from the "Array" class.
'''
import cppyy
cppyy.include('arrayfuncs.cpp')
from cppyy.gbl import Array
example_array = Array(10, 10)
print(example_array.zeros()) # the matrix gets created succesfully!
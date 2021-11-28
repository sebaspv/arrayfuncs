'''
Example file to show the pythonization of arrayfuncs and its functions
from the "Array" class.
'''
import cppyy
cppyy.include('arrayfuncs.cpp')
from cppyy.gbl import Array
example_array = Array(2, 3)
print("Zero matrix:", example_array.zeros()) # the zeros matrix gets created succesfully!
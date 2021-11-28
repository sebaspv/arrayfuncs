'''
Example file to show the pythonization of arrayfuncs and its functions
from the "Array" class.
'''

import cppyy
cppyy.include("arrayfuncs.cpp") # load arrayfuncs
cppyy.load_library("arrayfuncs")
from cppyy.gbl import Array # arrayfuncs is loaded succesfully
example_array = Array(10) # create a vector with a length of 10
print("Generate vector with zeros", list(example_array.zeros())) # the vector gets created succesfully!
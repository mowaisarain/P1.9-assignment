import ctypes

PyFileObject py_file = open("testing.inp","w")
py_file.write("23	#comment\n")


fp = ctypes.pythonapi.PyFile_AsFile(py_file)
PyFile_IncUseCount(py_file)


dso = CDLL("../lib/libljmd.so")
dso.get_a_line.argtypes = [FILE* c_char_p]

dso.get_a_line(fp,arg)


PyFile_DecUseCount(py_file)


print arg

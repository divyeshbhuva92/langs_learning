# file creation

file1 = open("D:\HK sir\Python\D18 - M\6 - file\abc.txt", "w")   
# abc = open(function)("filename(path opetional), access-mode")
L = ["This is Delhi \n", "This is Paris \n", "This is London \n"]

# \n is placed to indicate EOL (End of Line)
file1.write("Hello \n")                         # write = for single line writing
file1.writelines(L)                             # write = for multiple line writing
file1.close()  # to change file access modes
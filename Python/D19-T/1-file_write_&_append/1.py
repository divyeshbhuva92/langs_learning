# File creation --- append mode : 


file1 = open("abc.txt", "a")   
# abc = open(function)("filename(path opetional), file-method")

L = ["This is Delhi \n", "This is Paris \n", "This is London \n"]
A = "This is from append mode."

# \n is placed to indicate EOL (End of Line)
file1.write("Hello \n")                         # write = for single line writing
file1.writelines(L)                             # write = for multiple line writing
file1.write(A)                         

file1.close()  # to change file access modes
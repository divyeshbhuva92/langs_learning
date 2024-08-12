# copy from file

file1 = open("D:/HK_sir/Python/D19-T/3-copy_from_file/abc.txt", "r")   
file2 = open("D:/HK_sir/Python/D19-T/3-copy_from_file/def.txt", "w+")

file2.writelines(file1.readlines())

file1.close()
file2.close()
# Write a python program to check given string is palindrom or not.

str = input("Enter a string : ")

if(str == str[-1::-1]):
    print("String is palindrom.")
else:
    print("String is not palindrom.")

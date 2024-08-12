# palindrome

str1 = input("Enter a string : ")

# method-1:----------------------------------------------------------------
def palindrom_str(str):
    if(str == str[-1::-1]):
        return True
    else:
        return False

is_palindrom = palindrom_str(str1)

if is_palindrom:
    print("String is palindrom.")
else:
    print("String is not palindrom.")


# method-2:----------------------------------------------------------------
# newstr = ''

# for i in range(len(str1)-1, -1, -1):
#     newstr = newstr + str1[i]

# print(newstr)
# print(str1)

# if(str1 == newstr):
#     print("String is palindrom.")
# else:
#     print("String is not palindrom.")
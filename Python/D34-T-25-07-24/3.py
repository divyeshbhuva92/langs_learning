# check whether two strings are equal or not.

str1 = input("Enter val 1 :")
str2 = input("Enter val 2 :")

def equal_strings(a, b):
    if a == b:
        return True
    else:
        return False

is_equal = equal_strings(str1, str2)

if is_equal:
    print("Both strings are equal.")
else:
    print("Both strings are not equal.")
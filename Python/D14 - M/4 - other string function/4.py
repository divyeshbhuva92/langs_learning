# string functions...

str1='cat'
print(str1)

str2 = str1.center(10, '*')                 # center(length, character) - character is optional = bring string to center
print(str2)                                 # ***cat****

str3='banana'
str2 = str3.center(20, '#')
print(str2)                                 # #######banana#######

str4 = 'Pyhton is on'
x=str4.count('on')                          # count(character) = give the counting of character
print(x)                                    # 1

x=str4.find('on')                           # find(char) = give the index of where character starts
print(x)                                    # 4
x=str4.find('no')
print(x)                                    # -1 (due to missing string)

str5 = 'Python is on'
x = str5.startswith('on')                   # startwith(char) = return true or false depending on string starts with character
print(x)                                    # False
x = str5.endswith('on')                     # endswith(char) = return true or false depending on string end with character
print(x)                                    # True

x = str5.isalpha()                          # check whether string is only alphabetical or not (space not allowed)
print(x)                                    # False

str6 = '2024'
x = str6.isdigit()                          # check whether string is only numerical or not (space not allowed)
print(x)                                    # True
x = str6.isalnum()                          # check whether string is alpha-numerical or not (space not allowed)
print(x)                                    # True

str7 = ' '
x = str6.isspace()
y = str7.isspace()                          # check whether string is only whitespace or not
print(x, y)                                 # x = False,  y = True

x = str5.isupper()                          # check whether string is only uppercase or not
print(x)                                    # False
x = str5.upper() 
y = x.isupper()                             # check whether string is only uppercase or not
print(y)                                    # True

print()
x = str5.islower()                          # check whether string is only lowercase or not
print(x)                                    # False
x = str5.lower() 
y = x.islower()                             # check whether string is only lowercase or not
print(y)                                    # True
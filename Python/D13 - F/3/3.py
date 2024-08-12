# Write a python program to reverse the given string.


str = input("Enter a string : ")

len = len(str)

str_direct=str[-1::-1]
print('direct method : ', str_direct)

print('-------------------------------------------')

# with for loop --------------------------------
str1=''

for i in range(len-1, -1, -1):
    str1+=str[i]

# str = str1
print('from for loop : ', str1)

print('-------------------------------------------')

# with list method --------------------------------

list1 = list(str)
list1.reverse()
rev_str =''.join(list1)

print('from list method : ', rev_str)
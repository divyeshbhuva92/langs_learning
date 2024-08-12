# Write a python program to find out the maximum number from 2 numbers.

a = int(input('Enter the number 1 : '))
b = int(input('Enter the number 2 : '))

# if(a > b):
#     print(a, 'is max number.')
# else:
#     print(b, 'is max number.')

# Write a python program to find out the maximum number from 3 numbers.

c = int(input('Enter the number 3 : '))

if(a > b and a > c):
    print(a, 'is max number.')
elif(b > c and b > a):
    print(b, 'is max number.')
else:
    print(c, 'is max number.')
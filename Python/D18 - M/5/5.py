# Write a python program to find maximum and minimum of two numbers using module.

import min_num, max_num

x = int(input('Enter number 1 : '))
y = int(input('Enter number 1 : '))

if(x != y):
    min_num.min_number(x,y)
    max_num.max_number(x,y)
else:
    print('Both numbers are equal')

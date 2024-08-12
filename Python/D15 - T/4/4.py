# Create a user defined module with simple function for addition, subtraction, multiplication and division.
# Write a program to import the module and access functions defined in the module

import calc

inp1 = int(input('Enter val 1: '))
inp2 = int(input('Enter val 2: '))

calc_func = input('Enter funtion sign : ')

ans = calc.calculations(inp1, inp2, calc_func)
if(ans):
    print('Ans =', ans)

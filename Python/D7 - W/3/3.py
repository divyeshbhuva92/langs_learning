# write a python program to find max number from 2 number using function.

def max_number(a, b):
    if(a > b):
        max = a
    else:
        max = b
    return max

x = int(input('Enter value 1 : '))
y = int(input('Enter value 2 : '))

maxNum = max_number(x, y)
print('max number is ', maxNum)
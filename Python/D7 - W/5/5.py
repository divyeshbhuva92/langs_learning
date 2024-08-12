# Write a python program to sum of digits of the number and check number is armstrong or not.

def armstrong_num(b):
    sum = 0
    while(b != 0):
        digit = b % 10
        sum = sum + (digit ** 3)
        b = b // 10
    return sum

num = int(input('Enter the number : '))
is_armstrong = armstrong_num(num)

if(num == is_armstrong):
    print("Number is armstrong number.")
else:
    print("Number is not armstrong number.")   
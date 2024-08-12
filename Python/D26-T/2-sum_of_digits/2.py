# Write Python Program to get number from the user and find the Sum 
# of digits in entered number by the user and print the sum. Use module.

import sum_of_digit

num = int(input("Enter Number :"))

if(num > 0):
    sum_of_digit.sum_of_digs(num)
else:
    print("Number should not be less than 0")
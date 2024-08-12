# Write a python program to print the sum of the digits of the given number.
#  for example: input = 135, ans = 9

num = int(input('Enter the number : '))
digit = 0
sum = 0

while(num != 0):
    digit = num % 10
    sum = sum + digit
    num = num // 10

print(sum)
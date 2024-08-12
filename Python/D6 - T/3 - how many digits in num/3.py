# Write a python program to print the length of the given number.
#  for example: input = 2005, ans = 4

num = int(input('Enter the number : '))
digit = 0
count = 0

while(num != 0):
    digit = num % 10
    count = count + 1
    num = num // 10

print(count)
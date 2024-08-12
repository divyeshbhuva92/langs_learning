# Write a python program to print the reverse number of the given number.
#  for example: input = 135, ans = 531

num = int(input('Enter the number : '))
digit = 0
rev_num = 0

while(num != 0):
    digit = num % 10
    rev_num = (rev_num * 10) + digit
    num = num // 10
    
    

print(rev_num)
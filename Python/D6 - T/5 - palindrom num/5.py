# Write a python program to check the given number is palindrom or not.
#  for example: input = 121, reverse of input = 121. so number is palindrom.

num = int(input('Enter the number : '))
digit = 0
new_num = num
rev_num = 0

while(num != 0):
    digit = num % 10
    rev_num = (rev_num * 10) + digit
    num = num // 10
    

if (new_num == rev_num):
    print("number is palindrome")
else:
    print("number is not palindrome")

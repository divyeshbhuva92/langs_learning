# Write a python program to count uppercase characters and lowercase characters in string.

str = str(input('Enter a string : '))

space_count = str.count(' ')

str_no_space = str.replace(" ", "", space_count)

upper_count = 0
lower_count = 0

for i in str_no_space:
    upper_count += i.isupper()
    lower_count += i.islower()

print("upper_count = ", upper_count)
print("lower_count = ", lower_count)
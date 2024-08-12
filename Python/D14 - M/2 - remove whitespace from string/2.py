# Write a python program to remove whitespaces from string.

str = input("Enter a string : ")

space_count = str.count(' ')
print(space_count)

str_without_space = str.replace(" ", "", space_count)

print(str_without_space)
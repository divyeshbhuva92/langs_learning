# Write python program to count alphabetic characters & numeric characters in a string.

str = str(input('Enter a string : '))

space_count = str.count(' ')

str_no_space = str.replace(" ", "", space_count)

alpha_count = 0
digit_count = 0

# for i in str_no_space:
#     if((i >= 'A' and i <= 'Z') or (i >= 'a' and i <= 'z')):
#         alpha_count += 1
#     elif(i >= '0' and i <= '9'):
#         digit_count += 1
#     else:
#         pass

for i in str_no_space:
    alpha_count += i.isalpha()
    digit_count += i.isdigit()

print('alpha_count : ', alpha_count)
print('digit_count : ', digit_count)
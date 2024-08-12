# Write a python program to do mathematical operation according to given input number.
#  1 = addition, 2 = subtraction, 3 = multiplication, 4 = division

a = int(input('Enter the number 1 : '))
b = int(input('Enter the number 2 : '))
c = int(input('Enter operation id : '))

if(c > 0 and c <= 4):
    if(c == 1):
        print('-------------------------')
        print('Ans is ', a+b)
    elif(c == 2):
        print('-------------------------')
        print('Ans is ', a-b)
    elif(c == 3):
        print('-------------------------')
        print('Ans is ', a*b)
    else:
        print('-------------------------')
        print('Ans is ', a/b)
else:
    print('Please enter valid operation id (0 to 4)')
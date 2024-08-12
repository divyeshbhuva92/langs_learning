# Write a python funtion calculator that performs addition & subtraction, multiplication, division of
# two parameters & retruns their results.



def calculator():    
    x= int(input('Enter num 1 : '))
    y= int(input('Enter num 2 : '))
    choice= (input('Enter choice : '))

    if(choice == '+'):
        return x + y
    elif(choice == '-'):
        return x - y
    elif(choice == '*'):
        return x * y
    elif(choice == '/'):
        return x / y
    else:
        print("Invalid choice")

ans = calculator()
if(ans != None):
# if(choice == '+' or choice == '-' or choice == '*' or choice == '/'):
    print(ans)
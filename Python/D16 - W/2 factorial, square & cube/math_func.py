def math_utils(num, func_name): 
    print('hi')   
    if(func_name == 'factorial'):
        ans = 1
        if(num > 1):
            for i in range(1,num+1):
                ans = ans * i
        print('Factorial of', num, 'is ',ans)
    elif(func_name == 'square'):
        print('Square of ', num, 'is ', pow(num, 2))
    elif(func_name == 'cube'):
        print('Cube of', num, 'is ', pow(num, 3))
    else:
        print("Invalid function choice")
        
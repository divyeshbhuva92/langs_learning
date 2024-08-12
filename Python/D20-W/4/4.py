# Write a Python function to calculate the factorial of a number (a non-
# negative integer). The function accepts the number as an argument.

def factorial(number):
    ans = 1
    if(number == 0 or number == 1):
        ans = 1
    elif(number > 1):
        for i in range(2, number+1):
            ans = ans * i
    else:
        print("Number should be a positive number.")

    print(ans)

factorial(3)
factorial(2)
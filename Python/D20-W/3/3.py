# Define a function named even. This function expects a number as an argument and 
# returns True if the number is divisible by 2, or it returns False otherwise.


def even(number):
    number = int(input('Enter a number : '))
    if(number / 2 == 0):
        return True
    else:
        return False
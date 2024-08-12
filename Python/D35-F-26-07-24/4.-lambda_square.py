# Write a python program with lambda function to find a square of number.

num1 = int(input("Enter number :"))

square_of_number = lambda num : pow(num, 2)

print(square_of_number(num1))
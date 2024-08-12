# Write a definition of a method Even_Sum(numbers) to add 
# those valuses in the list of numbers, which are even.

list1 = [1, 2, 3, 4]

def Even_Sum(numbers):
    sum = 0
    for i in numbers:
        if i % 2 == 0:
            sum = sum + i
    print(sum)

Even_Sum(list1)
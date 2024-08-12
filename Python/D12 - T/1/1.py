# Write a program to find the number of times an element occurs in the list.


list1 = []

n = int(input('Enter number of elements :'))
count = 0

for i in range(n):
    x = int(input('Enter element: '))
    list1.append(x)
print()

val = int(input('Enter value to find : '))
count = list1.count(val)


print(count)


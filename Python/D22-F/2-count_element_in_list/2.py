# Develop python program to count occurrences of an 
# element in a list.

list1 = []

n = int(input('Enter range of elements : '))

for i in range(0, n):
    x = input('Enter element : ')
    list1.append(x)

# print(list1)

elem_to_count = input('Element to count : ')

count = list1.count(elem_to_count)
print(count)
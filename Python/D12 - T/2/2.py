# Write a program to read a list of elements.
# Modify this list so that it does not contain any duplicate elements,
# i.e., all elements occurring multiple times in the list should appear only once.

list1 = []
n = int(input('Enter number of elements :'))

for i in range(n):
    x = input('Enter element: ')
    list1.append(x)
print()

# method 1 : --------------------------------
# this method has not working if all elements in list

# for i in range(n):
#     if(list1.count(i) > 1):
#         list1.remove(i)

# method 2 : --------------------------------

list2 = []
for i in range(n):
 if (list1[i] not in list2):
  list2.append(list1[i])

# using set() method ------------------------

# s1 = set(list1)
# list1 = list(s1)
# print('list : ', list1)
 
print(list1)
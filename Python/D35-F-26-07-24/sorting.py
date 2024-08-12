# write a program to sort data without using funtion.

list1 = [15,12,17,5,22,35,21]

# l1 = int(input("Enter length of list 1 :"))
# for i in range(0,l1):
#     elem1 = input("Enter element for list 1 :")
#     list1.append(elem1)

for i in range(0, len(list1)):
    for j in range(i+1, len(list1)):
        if list1[i] >= list1[j]:
            smaller_num = list1.pop(j)
            list1.insert(i, smaller_num)

print(list1)
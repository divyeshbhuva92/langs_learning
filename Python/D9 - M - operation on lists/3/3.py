# print all elements of the list as shown below pattern.
# 1 2 3
# 4 5 6

a = [[1,2,3], [4,5,6]]
length_of_list = len(a)

for rows in a:
    for columns in rows:
        print(columns, end=" ")
    print()
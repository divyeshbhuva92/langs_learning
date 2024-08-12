# Write a program to print following pattern.
#         1
#       2 2
#     3 3 3
#   4 4 4 4
# 5 5 5 5 5

count = 5
for i in range(1, 6):
    for k in range(5,i,-1):
        print(" ", end=" ")
    for j in range(1, i+1):
        print(i, end=" ")
    print()




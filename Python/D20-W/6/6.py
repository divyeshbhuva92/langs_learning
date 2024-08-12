# Write a python program to multiply all the numbers stored in a list.

num_list = []

n = int(input("Enter a range for list: "))

for i in range(0, n):
    num = int(input("Enter number : "))
    num_list.append(num)

total = 1
for i in num_list:
    total = total * i

print(num_list)
print(total)
# Write a python program to multiply all the numbers stored in a list.

nums_list = [2,5,3,10]

ans = 1

for i in nums_list:
    ans = ans * i

new_list = []
for i in nums_list:
    new_list.append(i*2)

print(ans)
print(new_list)
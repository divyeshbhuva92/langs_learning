# find odd - even element count in the list.

n = int(input("Enter value: "))
list = []
odd_count = 0
even_count = 0

for i in range(n):
    x = int(input())
    list.append(x)
print(list)

for i in list:
    if(i % 2 == 0):
        even_count += 1
    else:
        odd_count += 1

print(even_count, odd_count)
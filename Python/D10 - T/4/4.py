# Write a program to read n numbers from users and calculate average 
# of those n numbers.

n = int(input("Enter value : "))
sum = 0
vals = []

for i in range(n):
    x = int(input())
    vals.append(x)
    # sum = sum + x
print(sum)

for i in range(len(vals)):
    sum = sum + vals[i]
    avg = sum / n
print(sum, avg)

# avg = sum / n
# print(avg)
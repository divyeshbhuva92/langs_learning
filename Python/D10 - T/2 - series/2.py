# Write a program to find the sum of following series:
# 1 + (1/3) + (1/5) + (1/7) + ....

n = int(input('Enter number : '))
sum = 0

for i in range(1, n+1, 2):
    print(i)
    sum = sum + (1/i)

print(sum)
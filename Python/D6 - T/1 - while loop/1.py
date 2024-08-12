#  while(condition):
    # body of loop

# Write a program to do addition of numbers 0 to 5.

n = 0
addUpto = int(input('Enter the number: '))
ans = 0

while(n <= addUpto):
    ans = ans + n
    n = n + 1

print(ans)

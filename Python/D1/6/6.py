# Write a python program that accept an integer (n) & computes the value of n+nn+nnn.

n = int(input('Enter the value : '))
ans = n + (n*n) + (n*n*n)

print('Answer is ',ans)
# Write a python program to print all the prime numbers between 
# 100 to 200.
# A prime number is a number that can only be divided by itself and 1 without remainders.
# prime numbers in 1 to 100 :
# 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97.
# 100 to 200 : 
# 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199.

prime_num_list = []

for num in range(100, 201):

    for i in range(2, num):
        if num % i == 0:
            break

    else:
        prime_num_list.append(num)

print(prime_num_list)

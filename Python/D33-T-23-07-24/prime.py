# prime numbers in 1 to 100 :
# 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97.
# 100 to 200 : 
# 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199.


def prime_num():
    num = int(input("Enter a number to check : "))
    for i in range(2, num // 2):
        if num % i == 0:
            print("number is prime")
            break
        else:
            print("number is not prime")

prime_num()
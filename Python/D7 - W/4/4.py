# write a python program to find number is prime or not using function.

def prime_number(num):
    flag = 0
    for i in range(2, num):
        if (num % i == 0):
            flag = 1
            break
        else:
            pass
    return flag

x = int(input('Enter value 1 : '))

isPrime = prime_number(x)

if(isPrime == 1):
    print('Number is not prime')
else:
    print('Number is prime')

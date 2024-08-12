# create a list of 10 random numbers

import random

l = []

x = int(input('Enter Lower limit of range : '))
y = int(input('Enter Upper limit of range : '))

for i in range(0,10):
    l.append(random.randint(x,y))
print(l)
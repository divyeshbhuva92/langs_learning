# Random_module

import random

y=random.randint(1,10)
print(y)

y=random.randint(1,100)
print(y)                 # in between range it give random integer number

y=random.random()
print(y)                 # in between range it give random float number

random.seed(10)          # starting of random number
y=random.random()        
print(y)

z=random.random()
print(z)
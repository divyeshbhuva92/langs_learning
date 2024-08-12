#math module

import math

x=math.sqrt(144)
print(x)                                # ans = 12.0

x=4
print(math.factorial(x))                # ans = 24

x=0
print(math.exp(x))                      # ans = 1.0

x=math.pi                               # value of pi
print(x)                                # ans = 3.141592653589793

print()

print('degree to radian')
y=math.radians(180)                     # degrees to radians
print(y)                                # ans = 3.141592653589793 

print('radian to degree')
y=math.pi
x=math.degrees(y)                       # radian to degree conversion
print(x)                                # ans = 180.0

print(math.sin(0))                      # ans = 0.0  ....because...  sin(0) = 0

# This method returns sin of a number
# to find sin of the degree it must converted into radian
y=math.pi
x=math.sin(y)
print(x)                                # ans = 1.224646799147532e-16       

print(math.sin(180))                    # ans = -0.8011526357338304

x=math.sin(math.radians(90))
print(x)                                # ans = 1.0

print(math.floor(5.7))                  # rounds a number down to the nearest intiger
print(math.floor(2.2))

print(math.ceil(5.7))                   # rounds a number up to the nearest intiger
print(math.ceil(2.2))


x=int(input('enter value of x: '))      # x = 2
y=int(input('enter value of y: '))      # y = 3
print(math.pow(x,y))                    # ans = 8
str = 'INDIA IS THE BEST'
print(str[-1::-1])  # reverse string = TSEB EHT SI AIDNI

print()

# tuple ---------------------------------

t1 = (4,10,72,20)
t2 = (5,6,3,13,15)
t3 = list(t1)

print('t3', t3)
print(t1)
print(t1[1:3])      # (10, 72)
print(len(t1))      # 4

k = min(t1)
print(k)            # 4

k = max(t1)
print(k)            # 72

# concating--------------
print(t1+t2)

print(t1[::-1])     # (20, 72, 10, 4)

print(t1*2)         # (4, 10, 72, 20, 4, 10, 72, 20)

# membership operator (in, not in) --------------
print(15 in t1)     # False
print(10 in t1)     # True

print(15 not in t1) # True

# Y = int(input("Enter 1 or 10 :"))
# if Y == 10:
#     for Y in range(1,11):
#         print(Y)
# else:
#     for m in range(5,0,-1):
#         print('Thank you')


import random

height = [10, 20, 30, 40, 50]
beg = random.randint(0,2)
end = random.randint(2,4)

for i in range(beg, end):
    print(beg, end)
    print(height[i], end="@")

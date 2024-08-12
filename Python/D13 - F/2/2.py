# count vowels in a string(capital as well as small)

str = input("Enter a string : ")
len = len(str)
count = 0
count = count + str.count('a') + str.count('e') + str.count('i') + str.count('o') + str.count('u') + str.count('A') + str.count('E') + str.count('I') + str.count('O') + str.count('U')  

print(count)

count1 = 0
vowels = ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U']
for i in vowels:
    for j in str:
        if(i == j):
            count1 = count1 + 1 

print(count1)
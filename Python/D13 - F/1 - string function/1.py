# 

s1 = 'Python'
l = len(s1)
print(l)

m = max(s1)                         # min-max function works based on ASCII value of characters
print(m)                            # y

n = min(s1)
print(n)                            # h

print(s1.lower())                   # converted into lowercase
print(s1.upper())                   # converted into uppercase

s2 = 'Python is Easy Easy'
print(s2.swapcase())                # swap case = uppercase to lowercase & lowercase to uppercase

print(s2.capitalize())              # First letter is capitalized & rest are lowercase

print(s2.title())                   # first letter uppercase of every word.

print(s2.replace('Easy', 'Hard', 1))   # replace(old_val, new_val, count)  = = = Python is Hard Easy

s3 = '   Python   '
x = s3.strip()                      # remove leading and trailing whitespaces
print('Language',x,'is easy.')

y = s3.lstrip()                     # remove left side whitespaces

print('Language',y,'is easy.')
y = s3.rstrip()                     # remove right side whitespaces
print('Language',y,'is easy.')
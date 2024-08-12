# dictionary function

dict1 = { 1 : 'Isha', 2 : 'Nisha', 3 : 'Anisha'}
print(dict1)

dict1[4] = 'Manisha'
dict1['last'] = 'Tanisha'
dict1[3] = 'Alisha'

print(dict1)

dict1.pop(3)
len = len(dict1)
print(len)
print(dict1)

get_ele = dict1.get(3)
print(get_ele)

del(dict1[4])
print(dict1)

dict1.clear()
print(dict1)
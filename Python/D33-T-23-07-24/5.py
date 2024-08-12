days = ('sun', 'mon', 'tues')
list1 = list(days)
list1[0] = 'wed'
days1 = tuple(list1)
print(days1)
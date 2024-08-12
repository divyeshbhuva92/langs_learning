# operation on lists : --->>
l = []
print(l)            # []

l.append(6)         # aapend(element) = add element at the end of list
l.append(10)
print(l)            # [6, 10]

l.insert(1,7)       # insert(index, element) = insert element on specific index
print(l)            # [6,7,10]

l.reverse()         # reverse() - to revese list
print(l)            # [10,7,6]

l.sort()            # sort() - to sort element in ascending order
print(l)            # [6,7,10]

l.sort(reverse=True)            # sort() - to sort element in decending order
print(l)                        # [10,7,6]

l.remove(7)         # remove(element) - remove specific element from list
print(l)            # [10,6]

k = min(l)          # min(listName) - to get minimum element from list
print(k)            # 6

k = max(l)          # maximum(listName) - to get minimum element from list
print(k)            # 10

p = l.count(6)      # count(element) - to count occurance of element in list
print(p)            # 1

l.clear()           # clear() - to clear list
print(l)            # []

l = [1,5,2,7]
m = l.pop()         # pop(index) - remove and return element specific index from list
print(m, l)         # m = 7,    l = [1,5,2]
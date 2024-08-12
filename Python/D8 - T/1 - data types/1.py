# Data types....

a = 3       # integer
print(a)

b = 4.56    # float
print(b)

c = 3 + 4j  # complex
print(c, type(c))

str1 = "hello"    # string
print(str1, str1[0:4], str1[-1])    # str[-1] = 'o' due to negative indexing.
print(str1[0:4])    # 0 to 3 = 'hell'

mystr = 'SCET is the best college'
print(mystr[15::1])     # t college
print(mystr[15::2])     # tclee
print(mystr[-10:-1:2])  # s olg
print(mystr[:5])        # SCET (with space at the end)
print(mystr[12:])       # best college
print(mystr[-4:-1])     # leg
print(mystr[-4:-1:-1])  # leg  = cant go to right side with (-1) step

list1 = [10, 'Red', 4.3]
print(list1, type(list1))
print(list1[1])    # 'Red'


list1 = (10, 'Red', 4.3)     # tuple
print(list1, type(list1))
print(list1[1], list1[-1])    # 'Red' 4.3

list1 = {10, 'pizza', 4.3}      # set
print(list1, type(list1))
# print(list1[1])    # error due to unordered

ob1 = {1 : 'Tirth', 'branch' : 'EC', 'country' : 'Canada'}    # dictionary
print(ob1, type(ob1))
print(ob1['branch'], ob1['country'])
print(ob1.keys())
# print(list1[1])    # error due to unordered

x=5
y=10
print(bool(x==y))        # boolean

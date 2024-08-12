# define a ffunction Overlapping() that takes two lists
# and returns true if they have at least one member in common,
# false otherwise.

list1 = []
list2 = []

l1 = int(input("Enter length of list 1 :"))
for i in range(0,l1):
    elem1 = input("Enter element for list 1 :")
    list1.append(elem1)

l2 = int(input("Enter length of list 2 :"))
for i in range(0,l2):
    elem2 = input("Enter element for list 2 :")
    list2.append(elem2)

# Method 1: ----------------------------------------------------------------
# def Overlapping(a,b):
#     flag = 0
#     for i in a:
#         for j in b:
#             if i == j:
#                 flag = 1
#     return flag

# Method 2: ----------------------------------------------------------------
def Overlapping(a,b):
    return bool(set(a) & set(b))
# --------------------------------------------------------------------------
        
is_overlapped = Overlapping(list1, list2)

if is_overlapped:
    print("both lists are overlapped")
else:
    print("both lists are not overlapped")
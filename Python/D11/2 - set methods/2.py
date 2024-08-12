s1 = {4,10,72,20}
print(s1)

# print(s1[0])        # Error = cause of set is unordered.

s2 = {5,10,21}
print(s2)             # {5,25,78,87} - set removes duplicates.

union_set = s1 | s2   # union = yog gan
print(union_set)      # {4, 20, 5, 21, 72, 10}

inter_set = s1 & s2   # Intersection = 6ed gan
print(inter_set)      # {10}

diff_set = s1 - s2    # difference between two sets
print(diff_set)       # {72, 4, 20}

diff_set1 = s1 ^ s2   # except difference between two sets
print(diff_set1)      # {4, 5, 72, 20, 21}
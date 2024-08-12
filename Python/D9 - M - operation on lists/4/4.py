#

arr=[]

rows, columns=5,5
print(rows,columns)

for i in range(rows):
    col = []
    for j in range(columns):
        col.append(0)
    arr.append(col)

print(arr)

import pandas as pd
import csv

data = pd.read_csv('D:/HK_sir/Python/D21-T/3-sorting-pandas/file1.csv')
# print(data.Values)

positive_count = 0
negative_count = 0

    
for row in data.Values:
    if( row < 0 ):
        negative_count = negative_count + 1

for row in data.Values:
    if( row >= 0 ):
        positive_count = positive_count + 1

print('positive count = ', positive_count)
print('negative count = ', negative_count)
# Write a python program to read data from “file1.csv”, if data is 
# negative write it in “negative.csv” and if data is positive write it 
# in “positive.csv

import pandas as pd
import csv

data = pd.read_csv('D:/HK_sir/Python/D21-T/3-sorting-pandas/file1.csv')
# print(data.Values)


with open('D:/HK_sir/Python/D21-T/3-sorting-pandas/negative.csv', mode='w', newline='') as val_sorting:
    S_List = csv.writer(val_sorting)
    field_names = ["Negative_Values"]
    S_List.writerow(field_names)
    
    for row in data.Values:
        if( row < 0 ):
            S_List.writerow([row])

with open('D:/HK_sir/Python/D21-T/3-sorting-pandas/positive.csv', mode='w', newline='') as val_sorting:
    S_List = csv.writer(val_sorting)
    field_names = ["Positive_Values"]
    S_List.writerow(field_names)

    for row in data.Values:
        if( row >= 0 ):
            S_List.writerow([row])
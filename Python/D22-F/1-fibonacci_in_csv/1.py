# Write a program to print 10 fibonacci numbers in file 
# "fibonnaci.csv"

import csv

with open('D:/HK_sir/Python/D22-F/1-fibonacci_in_csv/fibonacci.csv', mode='w', newline='') as val_sorting:
    S_List = csv.writer(val_sorting)
    field_names = ["Fibonacci numbers"]
    S_List.writerow(field_names)

    a=0
    b=1
    S_List.writerow([a])
    S_List.writerow([b])
    
    for i in range(1, 9):
        c=a+b
        S_List.writerow([c])
        a=b
        b=c
    
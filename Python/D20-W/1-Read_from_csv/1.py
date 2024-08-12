# Read from csv file

import csv

with open('D:/HK_sir/Python/D20-W/1-Read_from_csv/giants.csv', mode='r') as Organisations:
    Org = csv.reader(Organisations)                 # read from CSV file
    
    for line in Org:
        print(line)
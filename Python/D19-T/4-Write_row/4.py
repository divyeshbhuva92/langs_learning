import csv

with open('D:/HK_sir/Python/D19-T/4-Write_row/profiles1.csv', 'w', newline='') as file:
    writer = csv.writer(file)
    field = ["name", "age", "country"]
    
    writer.writerow(field)
    writer.writerow(["Oladele Damilola", "40", "Nigeria"])
    writer.writerow(["Alina Hricko", "23", "Ukraine"])
    writer.writerow(["Isabel Walter", "50", "Denmark"])


# csv = coma separated value
# --- It is a file format used to store tabular data(database).

# newline='' = enter data in new line after field names(name,age,country)

# syntax for csv.writer class :---
# --- csv.writer(csvFile, dialect='excel', **fmtparams)
# --- csvFile = file object with write method
# --- dialect='excel' = Optional. By default = excel
# --- **fmtparams = used for formatting parameters

# Write into csv file can be done using 'writerow' & 'writerows' methods.

# the csv can be created using 'csv.writer' class or 'csv.DictWriter' class.
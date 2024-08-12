# Create a database of 4 students with csv in-built module

import csv

with open('D:/HK_sir/Python/D19-T/5-csv_writing/python_data.csv', 'w', newline='') as students_lits:
    st_list = csv.writer(students_lits)
    field_names = ["Name", "Mobile", "Branch"]
    
    st_list.writerow(field_names)
    st_list.writerow(["Dev", "1234567899", "Electical"])
    st_list.writerow(["Milan", "2345678901", "Computer"])
    st_list.writerow(["Nilay", "3456789012", "Electrical"])
    st_list.writerow(["Tirth", "4567890123", "Computer"])

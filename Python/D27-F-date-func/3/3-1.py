# Write a python program to read date from user and print weekday of that date.

import datetime

def datefinder(year,month,date):
    b = datetime.date(year,month,date)
    dayoftheweek = b.weekday()
    
    wkdays = ['Monday', 'Tuesday', 'Wednesday', 'Thursday', 'Friday', 'Saturday', 'Sunday']

    if dayoftheweek:
        print(wkdays[dayoftheweek])

A=int(input('Enter the year:'))
B=int(input('enter the month: '))
C=int(input('enter date: '))

ans = datefinder(A,B,C)
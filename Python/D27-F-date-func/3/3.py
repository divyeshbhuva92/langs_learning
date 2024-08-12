# Write a python program to read date from user and print weekday of that date.

import datetime

def datefinder(year,month,date):
    b = datetime.date(year,month,date)
    dayoftheweek = b.weekday()
    wkdays = ['Monday', 'Tuesday', 'Wednesday', 'Thursday', 'Friday', 'Saturday', 'Sunday']

    if(dayoftheweek == 0):
        print(wkdays[0])
    elif(dayoftheweek == 1):
        print(wkdays[1])
    elif(dayoftheweek == 2):
        print(wkdays[2])
    elif(dayoftheweek == 3):
        print(wkdays[3])
    elif(dayoftheweek == 4):
        print(wkdays[4])
    elif(dayoftheweek == 5):
        print(wkdays[5])
    elif(dayoftheweek == 6):
        print(wkdays[6])

A=int(input('Enter the year:'))
B=int(input('enter the month: '))
C=int(input('enter date: '))

ans = datefinder(A,B,C)
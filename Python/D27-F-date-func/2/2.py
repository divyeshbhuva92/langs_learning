import datetime

info1 = datetime.datetime.now()                 # To print Date & Time 
print(info1)

Info = datetime.date.today()                    # To print Today`s Date`
 
print("Current year:", Info.year)               # To print year from date
print("Current month:", Info.month)             # To print month from date
print("Current day:", Info.day)                 # To print day from date

a = Info.weekday()                              # To print Weekday of date
print(a)

b=datetime.date(2024,7,3)                       # To print weekday of given date
dayoftheweek = b.weekday()
print(dayoftheweek)

date = datetime.date(2024,3,4)
print(date)
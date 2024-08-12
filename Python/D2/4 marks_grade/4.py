# Write a python program to read marks from keyboard &
# program should display equivalent grade according to following table.
# 100-80 = distinction, 60-79 = first class, 35-59 = second class, below 34 = fail.

marks = int(input('Enter marks : '))

if(marks >= 0 and marks <= 100):
    if(marks >= 80 and marks <= 100):
        print("You passed with `DISTINCTION`.")
    elif(marks >= 60 and marks <= 79):
        print("You passed with `FIRST CLASS`.")
    elif(marks >= 35 and marks <= 59):
        print("You passed with `SECOND CLASS`.")
    else:
        print("You `FAILED`.")
else:
    print("Marks must be between 0 and 100.")
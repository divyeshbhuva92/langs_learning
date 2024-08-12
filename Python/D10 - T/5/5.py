# Write a program to read the marks and assign a grade to a student.
# Grading system : A(>=90),B(80-89),C(70-79),
# D(60-69),E(50-59),F(<50)

marks = int(input('Enter marks : '))

if(marks >= 0 and marks <= 100):
    if(marks >= 90):
        print("Grade : A")
    elif(marks >= 80 and marks <= 89):
        print("Grade : B")
    elif(marks >= 70 and marks <= 79):
        print("Grade : C")
    elif(marks >= 60 and marks <= 69):
        print("Grade : D")
    elif(marks >= 50 and marks <= 59):
        print("Grade : E")
    else:
        print("Grade : F")
else:
    print("Marks must be between 0 and 100.")
# Write a program to calculate a percentage of student using multi-level inheritance.

class marks:
    def __init__(self):
        self.marks1 = int(input('Enter marks 1 : '))
        self.marks2 = int(input('Enter marks 2 : '))
        self.marks3 = int(input('Enter marks 3 : '))
class Percentage(marks):
    def calculate(self):
        self.perc = (self.marks1 + self.marks2 + self.marks3) / 3
class result(Percentage):
    def display_result(self):
        print('Your percentage is ', self.perc)

stu1 = result()
stu1.calculate()
stu1.display_result()
class Student:
    # Class variable
    school_name = 'ABC School '
    
    def __init__(self, name, roll_no):
        # instance variable
        self.name = name
        self.roll_no = roll_no

# create first object
s1 = Student("Emma", 10)
print(s1.name, s1.roll_no, Student.school_name)
# access class variable

# create second object
s2 = Student("Jessa", 20)
# access class variable
print(s2.name, s2.roll_no, Student.school_name)
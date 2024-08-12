# Multiple inheritance...
# GTU = base class, SU = base class,
# student = derived class


class GTU:
    def GTU_data(self):
        print('from gtu : ', self.name)

class SU:
    def SU_data(self):
        print('from su : ', self.name)   

class student(GTU, SU):
    def __init__(self):
        self.name = str(input('Enter name : ')) 


stu1 = student()
stu1.GTU_data()
stu1.SU_data()
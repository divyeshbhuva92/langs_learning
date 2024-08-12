# 

class Person:  
    def __init__(self, name, age):          # __init__ = method is refered as a constructor
        self.name = name    
        self.age = age      
    def greet(self):  
        print("Hello, my name is ", self.name)  
        print("& my age is ", self.age)  
  
# Create a new instance of the Person class and assign it to the variable person1  
person1 = Person("Ayan", 25)  
person1.greet()
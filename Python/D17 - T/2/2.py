# area of rectangle with constructor

class Area:  
    def __init__(self):          # __init__ = method is refered as a constructor
        self.length =  int(input('Enter lenght :'))
        self.width = int(input('Enter width :'))  
    def find_area(self):  
        print("Area of rect is ", (self.length * self.width))

area1 = Area()
area1.find_area()


# 

class Myclass:
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def setValue(self, x, y):
        self.x = int(input('Enter val 1 :'))
        self.y = int(input('Enter val 2 :'))
    
    def getValue(self):
        print('Value of x : ', self.x)
        print('Value of y : ', self.y)

obj1 = Myclass(5,10)
obj1.setValue(52, 25)
obj1.getValue()
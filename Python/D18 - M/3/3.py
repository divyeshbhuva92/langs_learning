# 

class SCET_SU:
    cnt = 0
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def get_Value(self):
        SCET_SU.cnt = int(input('Enter val 0 :'))
        self.x = int(input('Enter val 1 :'))
        self.y = int(input('Enter val 2 :'))
    
    def print_Value(self):
        print('Value of x : ', self.x)
        print('Value of y : ', self.y)

obj1 = SCET_SU(5,10)
obj1.get_Value()
obj1.print_Value()
print('Value of cnt : ', SCET_SU.cnt)
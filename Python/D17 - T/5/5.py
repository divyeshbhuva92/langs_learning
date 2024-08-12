# calculate area & perimeter of rectangle using heirarchical inheritance.
# perim of rect = 2(l+w), area = l * w

# class rect:
#     def __init__(self):
#         self.length = int(input('Length of rectangle: '))
#         self.width = int(input('width of rectangle: '))

# class area(rect):
#     def area_of_rect(self):
#         self.area = self.length * self.width
#         print("Area of rectangle is ", self.area)

# class peri(rect):
#     def perim_of_rect(self):
#         self.perim = 2*(self.length + self.width)
#         print("Area of rectangle is ", self.perim)

# r1 = area()
# r1.area_of_rect()
# r2 = peri()
# r2.perim_of_rect()


class area:
    def input(self):
        self.lenth=int(input('enter the lenth:'))
        self.base=int(input('enter the base:'))
class get_data(area):
    def processing(self):
        self.ans=self.lenth*self.base
        print('your rectangle area=',self.ans)
        
class put_data(area):
    def output(self):
        self.ans1=2*(self.lenth+self.base)
        print('your rectangle parimiti=',self.ans1)
        
obj=get_data()
obj.input()
obj.processing()


obj1=put_data()
obj1.input()
obj1.output()
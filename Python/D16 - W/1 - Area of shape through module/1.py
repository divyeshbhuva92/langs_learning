import area_calc

shape = input("Enter shape name : ")

a = input("Enter value of a :")
b = input("Enter value of b :")


area = 0

if(shape == 'circle'):
    b=1
    area = area_calc.area_of_circle(a)

if(shape == 'square'):
    area = area_calc.area_of_square(a, b)

if(shape == 'rectangle'):
    area = area_calc.area_of_rectangle(a, b)


print('Area of ',shape, ' = ', area)
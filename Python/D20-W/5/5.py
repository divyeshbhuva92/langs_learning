# Write a program that accepts the lengths of three sides of a triangle as inputs. The 
# program output should indicate whether or not the triangle is a right triangle.
#  x2 + y2 = z2



def right_Triangle():
    x = int(input("Enter first side value: "))
    y = int(input("Enter second side value: "))

    sides_square = (x**2) + (y**2)
    third_side_square = (x+y)**2

    if(sides_square == third_side_square):
        print("This triangle is a right triangle")
    else:
        print("This triangle is not a right triangle")

right_Triangle()

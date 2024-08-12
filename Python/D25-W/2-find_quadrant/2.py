# Given a point(x,y), Write Python Program to find whether this point
# lies in the First, Second, Third or Fourth Quadrant of X - Y Plane. Print 
# message of corresponding quadrant.

x_point = input(int("Enter x point value : "))
y_point = input(int("Enter y point value : "))

if(x_point != 0 and y_point != 0):
    if(x_point > 0 and y_point > 0):
        print("First quadrant.")
    elif(x_point < 0 and y_point > 0):
        print("Second quadrant.")
    elif(x_point < 0 and y_point < 0):
        print("Third quadrant.")
    else:
        print("Fourth quadrant.")
else:
    print("Point is the origin point.")
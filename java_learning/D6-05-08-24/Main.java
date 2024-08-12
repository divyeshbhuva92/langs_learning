class Rectangle {
    // data members
    int length, width;
    // methods
    
    Rectangle(int length, int width) {
        // to remove confusion between instance variables & class variables - this keyword
        this.length = length;
        this.width = width;
    }
    // prints the area of rectangle
    public void area() {
        int areaOfRectangle;
        areaOfRectangle =length * width;
        System.out.println("Area of rectangle with the given input is : " + areaOfRectangle);
    }
    // prints the perimeter of rectangle
    public void perimeter() {
        int  perimeterOfRectangle;
        perimeterOfRectangle = 2 * (length + width);
        System.out.println("Perimeter of rectangle with the given input is : " + perimeterOfRectangle);
    }
}

public class Main {
    public static void main(String args[]) {
        Rectangle rect_obj = new Rectangle(10,5);  // obect creation
        System.out.println("Length = " + rect_obj.length);
        System.out.println("Width = " + rect_obj.width);
        rect_obj.area(); // returns area of rectangle
        rect_obj.perimeter(); //returns perimeter of rectangle
    }
}
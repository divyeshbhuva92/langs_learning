// Write java program to find area of rectangle using constructor.

import java.util.Scanner;

public class area_of_rectangle {
    double l, b;
    Scanner sc = new Scanner(System.in);

    area_of_rectangle(){
        l = 2;
        b = 5;
    }
    void get_data(){
        System.out.println("Enter length of rectangle : ");
        l = sc.nextDouble();
        System.out.println("Enter base of rectangle : ");
        b = sc.nextDouble();
    }
    void get_area(){
        System.out.println("Area of rectangle : " + (l * b));
    }

    public static void main(String[] args){
        area_of_rectangle obj = new area_of_rectangle();
        obj.get_area();
        obj.get_data();
        obj.get_area();
    }
}

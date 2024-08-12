// 

import java.util.Scanner;

public class area_with_param_constructor {
    double l, b;

    area_with_param_constructor(double x, double y){
        l = x;
        b = y;
    }
   
    void get_area(){
        System.out.println("Area of rectangle : " + (l * b));
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter length of rectangle : ");
        double a = sc.nextDouble();
        System.out.println("Enter base of rectangle : ");
        double b = sc.nextDouble();
        
        area_with_param_constructor obj = new area_with_param_constructor(a, b);
        obj.get_area();
    }
}

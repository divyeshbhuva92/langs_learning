// 

import java.util.Scanner;
public class method_overloading
{
    double r,an;
    float l,b,ans;
    final double pi = 3.14; // final keyword = to make variable constant
    void area(double r)
    {
        an = pi * r * r;
        System.out.println("area of Circle : " + an);
    }
    void area(float l,float b)
    {
        ans = l * b;
        System.out.println("area of rectangle : " + ans);
    }
    void area(float l)
    {
        ans = l * l;
        System.out.println("area of Square : " + ans);
    }
    public static void main (String args[])
    {
    method_overloading obj = new method_overloading();
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter value of r : ");
    double r = sc.nextDouble();
    System.out.println("Enter value of l : ");
    float l = sc.nextFloat();
    System.out.println("Enter value of b : ");
    float b = sc.nextFloat();
    System.out.println("For Circle");
    obj.area(r);
    System.out.println("For Rectangle");
    obj.area(l,b);
    System.out.println("For Square");
    obj.area(l);
    }
}
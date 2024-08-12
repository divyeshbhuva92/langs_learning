
import java.util.Scanner;

// Write Java program using copy constructor to find area of rectangle.

public class area_of_triangle_copy_constructor {
    int l,b;
    double ans;
    area_of_triangle_copy_constructor(int x, int y){
        l = x;
        b = y;
    }
    area_of_triangle_copy_constructor(area_of_triangle_copy_constructor t1){
        l = t1.l;
        b = t1.b;
    }

    void area_of_triangle(){
        ans = 0.5 * l * b;
    }
    void print_area(){
        System.out.println("area_of_triangle is " + ans);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter val1 :");
        int a = sc.nextInt();
        System.out.println("Enter val2 :");
        int b = sc.nextInt();

        area_of_triangle_copy_constructor a1 = new area_of_triangle_copy_constructor(a, b);
        a1.area_of_triangle();
        a1.print_area();
    }
}

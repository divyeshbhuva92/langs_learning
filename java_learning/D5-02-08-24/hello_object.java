// object creation : class - object

import java.util.Scanner;

public class hello_object {
    int marks;
    void calc(int x){
        marks = x;
        System.out.println(marks);
    }
    public static void main(String[] args){
        hello_object obj = new hello_object();
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number :");
        int marks_val = sc.nextInt();
        obj.calc(marks_val);
    }
}

// student name, rollnum & percentage with copy constructor. 

import java.util.Scanner;

public class student_copy_constructor {
    String name;
    int roll_num;
    double percentage;

    student_copy_constructor(String x, int y, double z){
        name = x;
        roll_num = y;
        percentage = z;
        System.out.println("Enter name: " + name);
        System.out.println("Enter roll number: " + roll_num);
        System.out.println("Enter percentage: " + percentage);
    }

    student_copy_constructor(student_copy_constructor s1){
        name = s1.name;
        roll_num = s1.roll_num;
        percentage = s1.percentage;
        System.out.println("Enter name: " + name);
        System.out.println("Enter roll number: " + roll_num);
        System.out.println("Enter percentage: " + percentage);
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter name: ");
        String a = sc.nextLine();
        System.out.println("Enter roll number: ");
        int b = sc.nextInt();
        System.out.println("Enter percentage: ");
        double c = sc.nextDouble();

        student_copy_constructor stu1 = new student_copy_constructor(a,b,c);
        student_copy_constructor stu2 = new student_copy_constructor(stu1);
        
    }
}

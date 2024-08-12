
// classA = get marks, classB = calc percent, classC = calc average, classD = print percent, classE = print average
// classB & classC are children of classA. classD is child of classB & classE is child of classC.

import java.util.Scanner;

public class marks_hierarchical {
    int maths, chemistry, physics;
    double percent, average_marks;
    Scanner sc = new Scanner(System.in);

    void get_marks(){
        System.out.println("Enter maths marks: ");
        maths = sc.nextInt();
        System.out.println("Enter chemistry marks: ");
        chemistry = sc.nextInt();
        System.out.println("Enter physics marks: ");
        physics = sc.nextInt();
    }
}

class calc_percent extends marks_hierarchical {
    void get_percent(){
        percent = (maths + chemistry + physics) / 3;
    }
}

class calc_average extends marks_hierarchical {
    void get_average(){
        average_marks = (maths + chemistry + physics) / 3;
    }
}

class show_percent extends calc_percent{
    void print_percent(){
        System.out.println("Percent: " + percent);
    }
}

class show_avg extends calc_average{
    void print_avg(){
        System.out.println("Percent: " + average_marks);
    }
}

class res {
    public static void main(String[] args){
        show_percent p1 = new show_percent();
        show_avg a1 = new show_avg();
        
        p1.get_marks();
        p1.get_percent();
        p1.print_percent();

        a1.get_marks();
        a1.get_average();
        a1.print_avg();
    }
}
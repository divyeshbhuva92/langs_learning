// marks & percentage - multilevel inheritance

import java.util.Scanner;
public class marks_multilevel {
    int marks1, marks2, marks3;
    double percentage;
    Scanner sc = new Scanner(System.in);
    void get_marks(){
        System.out.println("Enter marks 1 : ");
        marks1 = sc.nextInt();
        System.out.println("Enter marks 2 : ");
        marks2 = sc.nextInt();
        System.out.println("Enter marks 3 : ");
        marks3 = sc.nextInt();
    }
}

class calc_percent extends marks_multilevel{
    void get_percent(){
        percentage = (marks1 + marks2 + marks3)/3;
    }
}

class print_percent extends calc_percent{
    void print_data(){
        System.out.println("Percent: " + percentage);
    }
}

class classroom_results {
    public static void main(String[] args){
        print_percent p1 = new print_percent();
        p1.get_marks();
        p1.get_percent();
        p1.print_data();
    }
}
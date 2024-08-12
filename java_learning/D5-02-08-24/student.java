// student roll no, name, percentage

import java.util.*;

public class student {
    int roll_no;
    String name;
    double percentage;
    void get_data(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter roll number : ");
        roll_no = sc.nextInt();
        System.out.println("Enter name : ");
        name = sc.nextLine();
        System.out.println("Enter percentage : ");
        percentage = sc.nextDouble();
    }
    void display_data(){
        System.out.println("Roll number : " + roll_no);
        System.out.println("Name : " + name);
        System.out.println("Percentage : " + percentage);
    }

    public static void main(String[] args){
        student st = new student();
        st.get_data();
        st.display_data();
    }
}

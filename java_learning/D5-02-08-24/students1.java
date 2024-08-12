// student roll no, name, percentage

import java.util.*;

public class students1 {
    String name;
    int roll_no;
    double percentage;
    void get_data(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter name : ");
        name = sc.nextLine();
        System.out.println("Enter roll number : ");
        roll_no = sc.nextInt();
        System.out.println("Enter percentage : ");
        percentage = sc.nextDouble();
    }
    void display_data(){
        System.out.println("Name : " + name);
        System.out.println("Roll number : " + roll_no);
        System.out.println("Percentage : " + percentage);
    }

    public static void main(String[] args){
        students1 st = new students1();
        for(int i = 0; i < 3; i++){
            st.get_data();
        }
        for(int i = 0; i < 3; i++){
            st.display_data();
        }
    }
}
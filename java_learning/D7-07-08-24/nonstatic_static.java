// non-static functions

import java.util.Scanner;

class nonstatic_static {
    int marks1, marks2, marks3;

    void get_data(int x, int y, int z){
        this.marks1 = x;
        this.marks2 = y;
        this.marks3 = z;
    }

    static void print_data() {
        int a;
        a = nonstatic_static.marks1;
        System.out.println("abcdefg : " + a + "%");
        // float percentage = (float)((obj1.marks1 + obj1.marks2 + obj1.marks3) / 3);
        // System.out.println("Percentage : " + percentage + "%");
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter math marks : ");
        int a = sc.nextInt();
        System.out.println("Enter sci marks : ");
        int b = sc.nextInt();
        System.out.println("Enter eng marks : ");
        int c = sc.nextInt();

        nonstatic_static obj = new nonstatic_static();
        obj.get_data();
        nonstatic_static.print_data();
    }
}
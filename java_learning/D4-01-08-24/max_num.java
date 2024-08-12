// Write a java program to find the max number from 3 numbers. numbers are given by user.

import java.util.Scanner;

class max_num {
    public static void main(String args[]) {
        int num1, num2, num3, max;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number 1: ");
        num1 = sc.nextInt();
        System.out.println("Enter number 2: ");
        num2 = sc.nextInt();
        System.out.println("Enter number 3: ");
        num3 = sc.nextInt();

        if(num1 != num2 || num2 != num3){
            max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
            System.out.println(max);
        }else{
            System.out.println("All three number are same");
        }
    }
}
// Write a JAVA program to reverse 3-digit integer number. For example, number 
// is 321 then its reverse is 123.

import java.util.Scanner;

public class reverse_num 
{
    public static void main(String[] args)
    {
        int num;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter num :");
        num = sc.nextInt();

        int reverse_num = 0;
        if(num >=0 && num < 1000){
            while (num != 0){
                int remain_num = num % 10;
                reverse_num = (reverse_num * 10) + remain_num;
                num = num / 10;
            }
        }
        System.out.println("Ans is: "+reverse_num);
    }

}
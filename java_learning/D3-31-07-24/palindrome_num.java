// Write a program in Java to check 
// whether number is palindrome or not.

// palindrome num example : 121  

import java.util.Scanner;

public class palindrome_num {
    public static void main(String[] args){
        int num;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter num :");
        num = sc.nextInt();

        int original_num = num;
        int reverse_num = 0;

        if(num >=0 && num < 1000){
            while (num != 0){
                int remain_num = num % 10;
                reverse_num = (reverse_num * 10) + remain_num;
                num = num / 10;
            }
        }

        if(original_num == reverse_num){
            System.out.println("number is palindrome.");
        }else{
            System.out.println("number is not palindrome.");
        }
    }
}

// 

import java.util.Scanner;

public class palindrome_num {
    public static void main(String[] args){
        int num, num_copy, digit = 0, rev_num = 0;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number : ");
        num = sc.nextInt();
        num_copy = num;

        while(num != 0){
            digit = num % 10;
            rev_num = (rev_num * 10) + digit;
            num = num / 10;
        }

        if(num_copy == rev_num) {
            System.out.println("Number is palindrome");
        }
        else{
            System.out.println("Number is not palindrome");
        }
    }
}

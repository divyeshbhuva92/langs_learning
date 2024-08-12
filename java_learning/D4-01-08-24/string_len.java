// write a java program to find length of the string given by user.

import java.util.Scanner;

public class string_len {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter string : ");
        String str = sc.nextLine();                 // nextline - for string
        int len = str.length();

        System.out.println("length is :" + len);
    }
}

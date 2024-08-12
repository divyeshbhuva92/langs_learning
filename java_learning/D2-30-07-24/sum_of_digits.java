
import java.util.Scanner;


public class sum_of_digits {
    public static void main(String[] args){
        int num, ans = 0;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter value: ");
        num = sc.nextInt();
        if (num >=0 && num <= 1000){
            while (num != 0){
                int remain_num = num % 10;
                ans = ans + remain_num;
                num = num / 10;
            }
            System.out.println("Ans is: "+ans);
        }
        else{
            System.err.println("Number should be between 0 and 1000");
        }
    }
}

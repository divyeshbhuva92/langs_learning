// Write java program to do addtion of only positive number from 10 numbers givent by user.

import java.util.Scanner;

public class addition_of_positive_num {
    public static void main(String[] args){
        int nums[] = new int[10];
        int i, sum = 0;
        for (i = 0; i < 10; i++)
        {
            Scanner sc = new Scanner(System.in);
            System.out.println("Enter number :");
            nums[i] = sc.nextInt();
        }

        // print the numbers
        for (i = 0; i < 10; i++)
        {
            System.out.print(nums[i] + " ");
        }

        // sum of positive numbers
        for (i = 0; i < 10; i++)
        {
            if(nums[i] >= 0){
                sum = sum + nums[i];
            }else{
                continue;
            }
        }

        System.out.println("Sum of positive numbers : " + sum);

    }
}

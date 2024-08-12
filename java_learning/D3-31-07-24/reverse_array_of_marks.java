// Write a java program to takes 5 inputs & prints them in reverse order.

import java.util.Scanner;

public class reverse_array_of_marks
{
    public static void main(String[] args)
    {
        int marks[] = new int[5];
        int i;
        for (i = 0; i < 5; i++)
        {
            Scanner sc = new Scanner(System.in);
            System.out.println("Enter marks :");
            marks[i] = sc.nextInt();
        }
        for (i = 5 - 1; i >= 0; i--)
        {
            System.out.println("Reversed marks :"+marks[i] + " ");
        }
    }
}
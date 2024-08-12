
import java.util.Scanner;

// Write a java program to do addtion of 2 matrices(2 x 2).

public class addition_of_matrix {
    public static void main(String[] args){
        int mat1[][] = new int[2][2];
        int mat2[][] = new int[2][2];
        int mat3[][] = new int[2][2];
        int i,j;
        Scanner sc = new Scanner(System.in);

        // get elements for matrix 1
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                System.out.println("Enter element for matrix 1 :");
                mat1[i][j] = sc.nextInt();
            }
        }

        // get elements for matrix 2
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                System.out.println("Enter element for matrix 2 :");
                mat2[i][j] = sc.nextInt();
            }
        }

        // do addition of both matrix
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                mat3[i][j] = mat1[i][j] + mat2[i][j];
            }
        }

        // print result matrix
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                System.out.print(mat3[i][j] + " ");
            }
            System.out.println(" ");
        }
        
    }
}

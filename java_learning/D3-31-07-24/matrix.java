import java.util.Scanner;

public class matrix
{
    public static void main(String[] args)
    {
        int mat[][] = new int[2][3];
        int i,j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 3; j++)
            {
                Scanner sc = new Scanner(System.in);
                System.out.println("Enter number :");
                mat[i][j] = sc.nextInt();
            }
        }
        for (i = 0; i < 2; i++)
        {
            for(j = 0; j < 3;j++)
            {
                System.out.print(mat[i][j] + " ");
            }
            System.out.println(" ");
        }
    }
}
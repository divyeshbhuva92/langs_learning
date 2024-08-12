import java.util.Scanner;

public class print_even_num_upto_n {
    public static void main(String args[]){
        int n;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter value:");
        n = sc.nextInt();
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0) {
                System.out.println("Ans is "+i);
            }
        }
    }
}


// public static void main(String[] args) :--->>
// public - it is an access specifier so it can be used outside of the class also.
// static - It is a keyword which allows to access a method without making an object of the class.
// void - return type
// main - method (body for main code)
// String args[] - It is an array where each element is string, & its size is not fixed.
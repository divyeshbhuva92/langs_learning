// 

import java.util.Scanner;

public class factorial_of_num {
    int num, ans = 1;
    void get_num(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number : ");
        num = sc.nextInt();
    }
    void get_facto(){
        if(num >= 0){
            if(num == 0 || num == 1){
                ans = 1;
            }
            else{
                for(int i = 1; i <= num; i++){
                    ans = ans * i;
                }
            }
        }
    }
    void display_ans(){
        System.out.println("Factorial of num is : " + ans);
    }

    public static void main(String[] args){
        factorial_of_num f_num = new factorial_of_num();
        f_num.get_num();
        f_num.get_facto();
        f_num.display_ans();
    }
}

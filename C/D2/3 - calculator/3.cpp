// Write a C program for addition, subtraction, multiplication & division based on choice of user.

#include <stdio.h>

int main(){
    float a, b, ans;
    char choice;

    printf("Enter values :");
    scanf("%f %f", &a, &b);

    printf("Enter choice :");
    scanf(" %c", &choice);     // if not leave space before %c, then it consider "Enter" key-down as a choice.

    if(choice == '+'){
        ans = a + b;
        printf("Your ans is %f\n", ans);
    }
    else if(choice == '-'){
        ans = a - b;
        printf("Your ans is %f\n", ans);
    }
    else if(choice == '*'){
        ans = a * b;
        printf("Your ans is %f\n", ans);
    }
    else if(choice == '/'){
        ans = a / b;
        printf("Your ans is %f\n", ans);
    }
    else{
        printf("Invalid choice\n");
    }
}
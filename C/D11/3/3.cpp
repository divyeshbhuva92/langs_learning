// Write a menu driven C program that asks user to select an option and perform 
// following task accordingly.
// If user opts 1. Find square of the number
// 2. Find cube of the number
// 3. Find square root of the number

#include <stdio.h>
#include <math.h>

int main(){
    int choice, num;
    float ans;

    printf("Enter number: ");
    scanf("%d", &num);

    printf("\nEnter Choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        ans = pow(num, 2);
        printf("square of a %d is %f", num, ans);
        break;
    case 2:
        ans = pow(num, 3);
        printf("cube of a %d is %f", num, ans);
        break;
    case 3:
        ans = pow(num, 0.5);
        printf("square root of a %d is %f", num, ans);
        break;
    
    default:
        printf("Invalid choice");
        break;
    }

}
// Write a C program to input an integer number and check the
// last digit of number is even or odd.

#include <stdio.h>

int main(){
    int num, last_digit;

    printf("Enter a number : ");
    scanf("%d", &num);

    last_digit = num % 10;
    printf("%d", last_digit);
    
    (last_digit % 2 == 0)
            ? printf("Last digit of entered number is even")
            : printf("Last digit of entered number is odd");
    
}
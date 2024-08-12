// Write a C program for find number is positive or negative.

#include <stdio.h>

int main(){
    int num;

    printf("Enter the number : ");
    scanf("%d", &num);

    num > 0 ? printf("Number is positive.") : printf("Number is negative.") ;
}
// Write a C program for find a max number of the 2 numbers using turnary operator.

#include <stdio.h>

int main(){
    int a, b, max;

    printf("Enter values: ");
    scanf("%d %d", &a, &b);

    max = a>b ? a : b;
    printf("Max number is %d", max);
}
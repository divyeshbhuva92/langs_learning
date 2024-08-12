// Write a C program to check given number is armstrong number or not using function
// armstrong number ---> sum of cube of every digit in number = entered number
// example :153

#include <stdio.h>
#include <math.h>
void armstrong_num();

int main(){
    armstrong_num();
}

void armstrong_num(){
    int num, entered_num, digit = 0, sum = 0;

    printf("Enter number : ");
    scanf("%d",&num);

    entered_num = num;  

    while(num != 0){
        digit = num % 10;
        sum = sum + pow(digit, 3);
        num = num / 10;
    }

    entered_num == sum ? printf("Number is armstrong number.") : printf("Number is not armstrong number.");
}
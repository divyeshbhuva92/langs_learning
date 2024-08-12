// Write a C program to count number of digits in a given number using function 

#include <stdio.h>
void count_digit();

int main(){
    count_digit();
}

void count_digit(){
    int num, digit = 0, count = 0;
    printf("Enter number : ");
    scanf("%d", &num);
    
    while(num != 0){
        digit = num % 10;
        count = count + 1;
        num = num / 10;
    }

    printf("Number %d digits.", count);
}
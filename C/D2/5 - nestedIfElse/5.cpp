// Write a C program to find max number from 3 numbers using nested if else statement.

#include <stdio.h>

int main(){
    int a, b, c;

    printf("Enter values : ");
    scanf("%d %d %d", &a, &b, &c);

    if(a>b){
        if(a>c){
            printf("Max number is %d", a);
        }
        else{
            printf("Max number is %d", c);
        }
    }
    else{
        if(b>c){
            printf("Max number is %d", b);
        }
        else{
            printf("Max number is %d", c);
        }
    }
}
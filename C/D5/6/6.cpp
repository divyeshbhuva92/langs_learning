// Write a C program to find the answer of factorial of user given number.

#include <stdio.h>

int main(){
    int i = 1, factorialNum, ans = 1;

    printf("Enter the number : ");
    scanf("%d", &factorialNum);

    while(i<=factorialNum){
        ans = ans * i;
        i++;
    }
    printf("%d", ans);
}
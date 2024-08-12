// Write a C program to find the answer of factorial of user given number.

#include <stdio.h>

int main(){
    int i, factorialNum, ans = 1;

    printf("Enter the number : ");
    scanf("%d", &factorialNum);

    for(i=1; i<=factorialNum; i++){
        ans = ans * i;
    }
    printf("%d", ans);
}
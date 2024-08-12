// Write a C program to find the answer of addition of upto user given number.

#include <stdio.h>

int main(){
    int i, sumUpto, ans = 0;

    printf("Enter the number to be added upto : ");
    scanf("%d", &sumUpto);

    for(i=1; i<=sumUpto; i++){
        ans = ans + i;
    }
    printf("%d", ans);
}
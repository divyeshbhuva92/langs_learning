// functions....
// Write c program to find value of factorial using function.

#include <stdio.h>

void factorial_of();

int main(){
    factorial_of();
}

void factorial_of(){
    int a, i, ans = 1;

    printf("Enter a number : ");
    scanf("%d", &a);

    for(i=a; i>0; i--){
        ans = ans * i;
    }

    printf("Value of factorial is %d\n", ans);
}
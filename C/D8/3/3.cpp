// function....
// find maximum number from 2 numbers given by user, using function.

#include <stdio.h>

void max_num(int x, int y);

int main(){
    int a, b;

    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);

    max_num(a, b);
}

void max_num(int x, int y){   // function with arguments & no return value.
    int k;
    k = x > y ? x :  y;
    printf("Maximum number is %d", k);
}
// functions...
// find minimun number from 2 numbers given by user, using function.

#include <stdio.h>

void min_num();

int main(){
    min_num();
}

void min_num(){   // function with no arguments & no return value.
    int x, y, k;

    printf("Enter 2 numbers: ");
    scanf("%d %d", &x, &y);
    
    k = x < y ? x :  y;
    printf("minimum number is %d", k);
}
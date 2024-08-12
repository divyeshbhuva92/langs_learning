// functions...
// find minimun number from 2 numbers given by user, using function.

#include <stdio.h>

int min_num();

int main(){
    int min;

    min = min_num();
    printf("minimum number is %d", min);
}

int min_num(){   // function with no arguments & return value.
    int x, y, k;

    printf("Enter 2 numbers: ");
    scanf("%d %d", &x, &y);
    
    k = x < y ? x :  y;
    return k;
}
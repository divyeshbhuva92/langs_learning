// functions....
// Write a C program to calculate the square and cube of the value using function.

#include <stdio.h>

int square_of(int x);
int cube_of(int x);

int main(){
    int a, ans1, ans2;

    printf("Enter value : ");
    scanf("%d", &a);

    ans1 = square_of(a);
    printf("square of %d is %d\n", a, ans1);

    ans2 = cube_of(a);
    printf("cube of %d is %d\n", a, ans2);
}

int square_of(int x){    // function with argument & return value.
    int k;
    k = x * x;
    return k;
}

int cube_of(int x){
    int l;
    l = x * x * x;
    return l;
}
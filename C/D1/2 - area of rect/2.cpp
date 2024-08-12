// Write a C program to find the area of rectangle.

#include <stdio.h>

int main(){
    float l, b, ans;

    printf("Enter length of rectangle : ");
    scanf("%f %f", &l, &b);

    ans = l*b;
    printf("Area of rectangle : %f", ans);
}
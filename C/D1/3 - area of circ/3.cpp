// write a C program to find the area of circle.

#include <stdio.h>
#define pi 3.14

int main(){
    float r, ans;

    printf("Enter the radius of the circle : ");
    scanf("%f", &r);

    ans = float(pi * r * r);
    printf("Area of the circle : %f", ans);
}
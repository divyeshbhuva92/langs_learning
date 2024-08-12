//Write a C program to find roots of the quadratic equation (ax2 + bx + c = 0).
// delta = b2 - 4ac
// x1 = -b + sqrt(b2 - 4ac) / 2a
// x2 = -b - sqrt(b2 - 4ac) / 2a

#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, delta;
    float k, x1, x2;

    printf("Enter Values : ");
    scanf("%f %f %f", &a, &b, &c);

    delta = ((b*b)-(4*a*c));
    k = sqrt(delta);

    x1 = (-b + k) / (2*a);
    x2 = (-b - k) / (2*a);

    printf("x1 = %f\n", x1);
    printf("x2 = %f", x2);
}
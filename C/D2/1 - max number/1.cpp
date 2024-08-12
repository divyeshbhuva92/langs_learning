// Write a C program to find the max number from 3 numbers.

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter values : ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
    {
        printf("Max number is %d\n", a);
    }
    else if (b > c && b > a)
    {
        printf("Max number is %d\n", b);
    }
    else
    {
        printf("Max number is %d\n", c);
    }
}

// recursion ...

#include <stdio.h>

int factorial_of_num(int n)
{
    int a = 1;
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        a = factorial_of_num(n - 1);
        return a;
    }
}

int main()
{
    int a, num;
    printf("Enter the number : ");
    scanf("%d", &num);

    a = factorial_of_num(num);
    printf("\n ans is : %d", a);
}
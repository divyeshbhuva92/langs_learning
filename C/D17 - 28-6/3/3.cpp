// Write a c program to add odd numbers upto n. n is entered by user.

#include <stdio.h>

int main()
{
    int n, i, ans = 0;

    printf("Enter num : ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            ans = ans + i;
        }
    }

    printf("Ans is : %d ", ans);
    return 0;
}
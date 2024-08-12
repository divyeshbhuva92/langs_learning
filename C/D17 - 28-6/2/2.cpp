//

#include <stdio.h>

int main()
{
    int a = 5;

    while (a >= 3)
    {
        printf("RABBIT \n");
        break;
    }
    printf("GREEN");

    printf("\n");
    // -------------------------------------

    int b = 25;

    while (b <= 27)
    {
        printf("%d ", b);
        b++;
    }

    printf("\n");
    // -------------------------------------

    int k;
    for (k = 1; k <= 5; k++)
    {
        printf("%d ", k);
    }

    printf("\n");

    // =====================================

    int i = 1;

    for (i = 10; i >= 1; --i)
    {
        printf("%d ", i);
        i--;
    }

    return 0;
}
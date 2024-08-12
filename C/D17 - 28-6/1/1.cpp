// Write a C program

#include <stdio.h>

int main()
{
    // int i, j;
    // for (i = 0; i < 10; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         j = i * i;
    //     }
    //     printf("i = %d, j = %d\n", i, j);
    // }

    int num = 3;
    while (num < 15)
    {
        if (num <= 10)
        {
            printf("%d \n", num);
            continue;
        }
        if (num == 13)
        {
            printf("%d \n", num);
            break;
        }
        num++;
    }
}

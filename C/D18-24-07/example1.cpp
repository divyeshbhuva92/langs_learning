// Write a C program which reads 10 positive integers from keyboard
// and counts number of integers greater than 50 & less than 100 and
// divisible by 6.

#include <stdio.h>

int main()
{
    int num, count = 0;
    printf("Enter 10 positive integers:\n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num);
        if (num > 0)
        {
            if (num > 50 && num < 100 && num % 6 == 0)
            {
                count++;
            }
        }
        else
        {
            printf("Please enter a positive integer");
        }
    }

    printf("%d \n", count);

    return 0;
}
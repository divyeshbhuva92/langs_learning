// file create & write following pattern in it.
// *
// * *
// * * *

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char ch;
    int i, j;

    fp = fopen("abc.txt", "w"); // w = write mode

    if (fp == NULL)
    {
        printf("Error opening file");
        exit(0);
    }

    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= i; j++)
        {
            fprintf(fp, "* ");
        }
        fprintf(fp, "\n");
    }
    fclose(fp); // close
}
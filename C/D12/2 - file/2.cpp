// file create & write in it.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char ch;

    fp = fopen("abc.txt", "w"); // w = write mode

    if (fp == NULL)
    {
        printf("Error opening file");
        exit(0);
    }

    while (1)
    {
        scanf("%c", &ch);

        if (ch == '*')
        {
            break;
        }
        fputc(ch, fp);
    }
    fclose(fp); // close
}
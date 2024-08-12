// copy content from one file to another.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp1, *fp2;
    char ch;

    fp1 = fopen("abc.txt", "r"); // r = read mode
    if (fp1 == NULL)
    {
        printf("Error opening file");
        exit(0);
    }

    fp2 = fopen("def.txt", "w"); // w = write mode
    if (fp2 == NULL)
    {
        printf("Error opening file");
        exit(0);
    }

    while (1)
    {
        ch = fgetc(fp1);
        if (ch == EOF)
        {
            break;
        }
        fputc(ch, fp2);
        printf("%c", ch);
    }
    fclose(fp1); // close
    fclose(fp2); // close
}
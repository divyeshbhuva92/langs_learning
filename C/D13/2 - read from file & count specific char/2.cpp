// read from file & count occurance of specific character.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char ch;
    char char_to_find;
    int count = 0;

    fp = fopen("abc.txt", "r"); // w = write mode

    if (fp == NULL)
    {
        printf("Error opening file");
        exit(0);
    }

    printf("Enter char : ");
    scanf("%c", &char_to_find);
    while (1)
    {
        ch = fgetc(fp);
        if (ch == EOF)
        {
            break;
        }
        else
        {
            if (ch == char_to_find)
            {
                count++;
            }
        }
    }
    fclose(fp); // close
    printf("%d", count);
}
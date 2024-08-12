// read from file.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char ch;

    fp = fopen("abc.txt", "r"); // w = write mode

    if (fp == NULL)
    {
        printf("Error opening file");
        exit(0);
    }

    while (1)
    {
        ch = fgetc(fp);
        if(ch == EOF){
            break;
        }
        printf("%c", ch);
    }
    fclose(fp); // close
}
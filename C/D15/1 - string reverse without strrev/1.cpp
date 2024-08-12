// Write a C program to reverse the string without using the 'strrev' function.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i;

    printf("Enter string value: ");
    scanf("%s", str);

    int len = strlen(str);

    printf("reverse string is : \n");

    for (i = len - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    printf("%c", str[i]);
}
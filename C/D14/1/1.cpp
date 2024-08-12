// Write a c program to check the string is palindrome or not.

#include <stdio.h>
#include <string.h>

void palindrome_check()
{
    char str1[10];

    printf("Enter string : ");
    scanf("%s", str1);
    int len = strlen(str1);

    // Iterate up to half the length (handling odd and even lengths)
    for (int i = 0; i < len / 2; i++)
    {
        if (str1[i] != str1[len - 1])
        {
            printf("String is not palindrome");
        }
        else
        {
            printf("String is  palindrome");
        }
    }
}

int main()
{
    palindrome_check();
}
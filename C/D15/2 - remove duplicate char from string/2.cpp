// Write a c program to remove duplicates from string.
// for example: input: ababab, output: ab

#include <stdio.h>
#include <string.h>

void remove_Duplicates()
{
    char str1[100], str2[100];

    printf("Enter string value: ");
    scanf("%s", str1);

    strcpy(str2, str1);
    int i, j, k, len = strlen(str2);

    for (i = 0; i < len; i++)
    {
        for (j = i + 1; str2[j] != '\0'; j++)
        {
            if (str2[j] == str2[i])
            {
                for (k = j; str2[k] != '\0'; k++)
                {
                    str2[k] = str2[k + 1];
                }
            }
        }
    }

    printf("original string = %s\n", str1);
    printf("string without duplicate char = %s\n", str2);
}

int main()
{
    remove_Duplicates();
}
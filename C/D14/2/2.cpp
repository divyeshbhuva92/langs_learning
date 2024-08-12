// Write a c program to get a string from user & add specific character("#")
// after each character of the string.
// for example: input "Surat" in str1, output : "S#r#t"

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int i;
    printf("Enter string : ");
    scanf("%s", str1);
    int len = strlen(str1);

    for (i = 0; i < len - 1; i++)
    {
        printf("%c", str1[i]);
        printf("#");
    }
    printf("%c", str1[i]);
}

/*int j = 0;

for (int i = 0; i < len; i++)
{
    if (i < len - 1)
    {
        str2[j] = str1[i];
        j++;
        str2[j] = '#';
        j++;
    }
    else
    {
        str2[j] = str1[i];
    }
}

printf(str2);
}

int main()
{
modified_string();
}*/
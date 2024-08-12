// string functions...
// Write a C program to remove a specific character from a string.

#include <stdio.h>
#include <string.h>

int main(){
    char str1[10], str2[10];
    char char_to_remove;
    int i, j = 0 ;

    printf("Enter name: ");
    scanf("%s", str1);
    printf("Enter character to remove: ");
    scanf(" %c", &char_to_remove);
    
    printf("Entered string is %s\n", str1);

    //----------------------------------------------------------------

    int len = strlen(str1);

    for (i = 0; i <= len; i++)
    {
        if(char_to_remove != str1[i]){
            str2[j] = str1[i];
            j++;
        }
    }

    str2[j] = '\0';                     // to enter the null character at the end of the string.
    printf("new string is %s", str2);    
}
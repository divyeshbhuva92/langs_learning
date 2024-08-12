// string functions...
// Write a C program to check entered string is palindrome or not.

#include <stdio.h>
#include <string.h>

int main(){
    char str1[10], str2[10];

    printf("Enter name 1: ");
    scanf("%s", str1);
    
    strcpy(str2, str1);
    // printf("1 - %s, 2 - %s", str1, str2);

    strrev(str2);
    
    //----------------------------------------------------------------

    int compare_result = strcmp(str1, str2);

    compare_result == 0 ? printf("Enter string is palindrome.") : printf("Enter string is not palindrome.");
    
}
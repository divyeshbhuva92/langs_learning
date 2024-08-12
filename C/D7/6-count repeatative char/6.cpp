// string functions...
// Write a C program to count how many time a specific character is repeated in a string.

#include <stdio.h>
#include <string.h>

int main(){
    char str1[10];
    char char_to_count;
    int i, count = 0;

    printf("Enter name: ");
    scanf("%s", str1);
    printf("Enter character to count: ");
    scanf(" %c", &char_to_count);
    
    //----------------------------------------------------------------

    int len = strlen(str1);

    for (i = 0; i <= len; i++)
    {
        if(char_to_count == str1[i]){
            count += 1;
        }
    }
    
    printf("count is %d", count);
    
}
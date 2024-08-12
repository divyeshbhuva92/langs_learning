// string functions...
// strcpy = to copy one string to another.

#include <stdio.h>
#include <string.h>

int main(){
    char str1[10], str2[10];

    printf("Enter name: ");
    scanf("%s", str1);

    printf("Entered string is %s\n", str1);
    
    //----------------------------------------------------------------

    strcpy(str2, str1);                         // str2 = destination, str1 = source
    printf("Value in string-2 is %s\n", str2);
    
}
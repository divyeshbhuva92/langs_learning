// string functions...
// strcmp = to compare 2 strings.
// if both strings are equal, then it returns 0. & if not, then it returns any non-zero value.

#include <stdio.h>
#include <string.h>

int main(){
    char str1[10], str2[10];

    printf("Enter name 1: ");
    scanf("%s", str1);
    printf("Enter name 2: ");
    scanf("%s", str2);
    
    //----------------------------------------------------------------

    int compare_result = strcmp(str1, str2);
    printf("%d", compare_result);
    
}
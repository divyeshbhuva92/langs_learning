// string

#include <stdio.h>
#include <string.h>

int main(){
    char str[10];

    printf("Enter name : ");
    // scanf("%s",str);               // in string "&" is not required befor variable name.
        // or
    gets(str);

    printf("Your name is : ");
    // printf("%s",str);
        // or
    puts(str);
}
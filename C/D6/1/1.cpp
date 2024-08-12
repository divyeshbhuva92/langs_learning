// Write a C program to check whether the entered character is
// capital, small letter, digit or any special character.

#include <stdio.h>

int main(){
    char val;

    printf("Enter value: ");
    scanf(" %C", &val);

        if(val >= 'A' && val <= 'Z'){
            printf("Enter character is capital letter.");
        }
        else if(val >= 'a' && val <= 'z'){
            printf("Enter character is small letter.");
        }
        else if(val >= '0' && val <= '9'){
            printf("Enter character is digit.");
        }
        else{
            printf("Enter character is special character.");
        }
}
// Write a C program to for below output.
// * * *
// * *
// *

#include <stdio.h>

int main(){
    int i,j;

    for(i = 3; i >= 1; i--){
        for(j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");      
    }
}
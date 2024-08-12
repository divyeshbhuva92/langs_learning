// Write a C program to for below output.
// A
// A B
// A B C
// A B C D

#include <stdio.h>

int main(){
    int i,j;

    for(i = 1; i <= 4; i++){
        for(int j = 1; j <= i; j++){
            printf("%c ", char(j+64));
        }
        printf("\n");      
    }
}
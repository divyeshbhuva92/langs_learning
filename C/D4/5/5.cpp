// Write a C program to for nested for loops.

#include <stdio.h>

int main(){
    int i,j;

    for(i = 1; i <= 3; i++){
        for(int j = 1; j <= 2; j++){
            printf("%d", i);
        }
        printf("\n");      
    }
}
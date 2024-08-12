// Write a C program to for below output.
// 1
// 2 2
// 3 3 3

#include <stdio.h>

int main(){
    int i,j;

    for(i = 1; i <= 3; i++){
        for(int j = 1; j <= i; j++){
            printf("%d ", i);
        }
        printf("\n");      
    }
}
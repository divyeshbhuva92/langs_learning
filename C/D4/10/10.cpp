// Write a C program to for below output.
// 1
// 3 5
// 7 9 11
// 13 15 17 19

#include <stdio.h>

int main(){
    int i,j;
    int startPoint = 1;

    for(i = 1; i <= 4; i++){
        for(j = 1; j <= i; j++){
            if(startPoint % 2 != 0){
                printf("%d ", startPoint);
            }
            startPoint+=2;
        }
        printf("\n");      
    }
}
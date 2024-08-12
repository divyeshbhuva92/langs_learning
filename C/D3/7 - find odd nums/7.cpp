// Write a C program to print the odd numbers between 1 to 100 in descending order.

#include <stdio.h>

int main(){
    int i;

    for(i = 100; i >= 1; i--){
        if(i%2!=0){
            printf("%d, ", i);
        }
    }
}
// Write a C program to find the answer of addition of 1 to 5.

#include <stdio.h>

int main(){
    int i, ans = 0;

    for(i=1; i<=5; i++){
        ans = ans + i;
    }
    printf("%d", ans);
}
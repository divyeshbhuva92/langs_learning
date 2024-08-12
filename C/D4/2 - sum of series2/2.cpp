// Write a C program to find the total sum of each number power with its own, up to given number.
// 1  raised to 1 + 2 raised to 2 + 3 raised to 3 + 4 raised to 4 + ....

#include <stdio.h>
#include <math.h>

int main(){
    int i, num, ans = 0;

    printf("Enter a number : ");
    scanf("%d", &num);

    for(i=1; i<=num; i++){
        ans = ans + pow(i, i);
    }
    printf("Total sum is %d", ans);
}
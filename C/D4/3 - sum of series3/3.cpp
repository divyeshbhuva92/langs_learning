// Write a C program to find the total of numbers upto given by user in below series manner.
// 1/1 - 1/2 + 1/3 - 1/4 + 1/5 - .....

#include <stdio.h>
#include <math.h>

int main(){
    float ans = 0.0;
    int i, num;

    printf("Enter a number : ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++){
        ans = (i % 2 != 0) ? ans + (1.0/i) : ans - (1.0/i);
    }

    printf("Total of the series is %f", ans);
}
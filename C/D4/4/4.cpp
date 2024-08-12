// Write a C program to find the total of numbers upto n in below series manner.
// 1/x + 1/x square + 1/x cube ....., x is also given by user.

#include <stdio.h>
#include <math.h>

int main(){
    float ans = 0.0;
    int i, base_num, power_upto;

    printf("Enter a values : ");
    scanf("%d %d", &base_num, &power_upto);

    for(i = 1; i <= power_upto; i++){
        ans = ans + (1.0/pow(base_num, i));
    }

    printf("Total of the series is %f", ans);
}
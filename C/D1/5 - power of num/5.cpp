// Write a C program to find the value of x raise to y.

#include <stdio.h>
#include <math.h>

int main(){
    int x, y, ans;

    printf("Enter values : ");
    scanf("%d %d",&x, &y);

    ans = pow(x, y);
    
    printf("ans is : %d\n", ans);
    
}
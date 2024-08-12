// Write a C program to find the total sum of square of each number up to given number.
// 1 sqare + 2 sqare + 3 sqare + 4 sqare + ....

#include <stdio.h>

int main(){
    int i, num, ans = 0;

    printf("Enter a number : ");
    scanf("%d", &num);

    for(i=1; i<=num; i++){
        ans = ans + (i*i);
    }
    printf("Total sum of squares of number upto %d is %d - ", num, ans);
}
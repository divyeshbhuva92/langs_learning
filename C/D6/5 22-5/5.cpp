// Fibonacci sequence
// 0 1 1 2 3 5 8 13 21 34 ......

#include <stdio.h>

int main(){
    int n, num1 = 0, num2 = 1, next_num;

    printf("Enter the number to show upto: ");
    scanf("%d", &n);

    printf("Your fibonacci Series: ");

    for (int i = 1; i <= n; ++i) {
        printf("%d, ", num1);
        next_num = num1 + num2;
        num1 = num2;
        num2 = next_num;
    }
}
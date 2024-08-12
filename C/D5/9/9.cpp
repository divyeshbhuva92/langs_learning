// reverse the given number.

#include <stdio.h>

int main(){
    int n, digit;
    int new_num = 0;

    printf("Enter Value: ");
    scanf("%d", &n);

    while (n>0)
    {
        digit = n % 10;
        new_num = (new_num * 10) + digit;        
        n = n / 10;
    }

    printf("%d", new_num);
}
//

#include <stdio.h>

int main(){
    int n, digit, ans = 0;

    printf("Enter Value: ");
    scanf("%d", &n);

    while (n>0)
    {
        digit = n % 10;
        ans = ans + digit;
        n = n / 10;
    }
    printf("%d", ans);
}
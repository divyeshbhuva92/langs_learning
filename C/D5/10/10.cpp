// reverse the given number & find the number is palindrome or not.

#include <stdio.h>

int main(){
    int n, digit;
    int new_num , rev_num = 0;

    printf("Enter Value: ");
    scanf("%d", &n);
    new_num = n;
   
    while (n>0)
    {
        
        digit = n % 10;
        rev_num = (rev_num * 10) + digit;        
        n = n / 10;
    }
    (new_num == rev_num) ? printf("Number is palindrome") : printf("Number is not palindrome");
    printf("%d\n", rev_num);
    printf("%d", new_num);
}
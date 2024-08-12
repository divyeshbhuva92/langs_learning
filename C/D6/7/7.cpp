// array

#include <stdio.h>

int main(){
    int a[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Enter value: ");
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d", a[i]);
    }
       
}
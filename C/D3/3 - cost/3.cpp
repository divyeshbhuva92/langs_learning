// Write a C program....

#include <stdio.h>

int main(){
    int a, cost;

    printf("Enter value of A: ");
    scanf("%d", &a);

     cost = a>20 ? (a>50 ? 100 : 40) : 10;
     printf("Cost is %d", cost);
}
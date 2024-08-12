// Write a C program to find count of even numbers from array of 10 numbers.

#include <stdio.h>

int main(){
    int arr[10];
    int i, count = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Enter value : ");
        scanf("%d",&arr[i]);
    }

    for (i = 0; i < 10; i++)
    {
        if(arr[i] % 2 == 0){
            count++;
        }
    }
    
    printf("Count of even numbers in array : %d\n", count);
    
}
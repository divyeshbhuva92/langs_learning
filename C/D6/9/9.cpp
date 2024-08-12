// Write a C program to find max number from array of 10 numbers.

#include <stdio.h>

int main(){
    int arr[10];
    int i, maxNum = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Enter value : ");
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 10; i++)
    {
        if(arr[i] >= maxNum){
            maxNum = arr[i];
        }
    }

    printf("Max number is : %d\n", maxNum);
    
    
}
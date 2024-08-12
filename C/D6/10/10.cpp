// Write a C program to find specific number exist in array of 10 numbers.

#include <stdio.h>

int main(){
    int arr[10];
    int i, num_to_find, numExist = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Enter value : ");
        scanf("%d", &arr[i]);
    }

    printf("Enter number to find : ");
    scanf("%d", &num_to_find);

    for (i = 0; i < 10; i++)
    {
        if(arr[i] == num_to_find){
            numExist = 1;
        }
    }

    numExist == 1
    ? printf("Array contain this number. - %d", num_to_find)
    : printf("Array does not contain this number. - %d", num_to_find);

}
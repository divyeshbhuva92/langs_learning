// Write a C program to find repeatation of specific number in array of 5 numbers.

#include <stdio.h>

int main(){
    int arr[5];
    int i, num_to_find, numExist = 0, count = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Enter value : ");
        scanf("%d", &arr[i]);
    }

    printf("Enter number to find : ");
    scanf("%d", &num_to_find);

    for (i = 0; i < 5; i++)
    {
        if(arr[i] == num_to_find){
            numExist = 1;
            count++;
        }
    }

    numExist == 1
    ? printf("Array contain number %d %d times.", num_to_find, count)
    : printf("Array does not contain this number.  %d", num_to_find);
}
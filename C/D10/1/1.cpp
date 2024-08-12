// Write a C program to remove duplicate entries from the array of 10 data.


#include <stdio.h>

int main(){
    int i, j, k = 0, size_of_arr = 10;
    int arr1[size_of_arr];
    int arr2[size_of_arr];

    for (i = 0; i < size_of_arr; i++)
    {
        printf("Enter 10 values : ");
        scanf("%d", &arr1[i]);
    }
    
    printf("Original array: ");
    for (i = 0; i < size_of_arr; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("--------------------------------\n");

    for (i = 0; i < size_of_arr; i++)
    {
        int isDuplicate = 0;
        for (j = i + 1; j < size_of_arr; j++){
            if(arr1[i] == arr1[j]){
                isDuplicate = 1;
                break;
            }
        }

        if(!isDuplicate){
            arr2[k] = arr1[i];
            k++;
        }
    }
 
    printf("Array after removing duplicates: ");   
    for (i = 0; i < k; i++) {
        printf("%d ", arr2[i]);
    } 
    printf("--------------------------------\n");

    printf("Original array: ");
    for (i = 0; i < size_of_arr; i++)
    {
        printf("%d ", arr1[i]);
    }
}
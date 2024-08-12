// Write a program in C to separate odd and even integers in separate arrays

#include <stdio.h>

int main(){
    int i, n, odd_count = 0, even_count = 0;

    printf("Enter size of array : ");
    scanf("%d", &n);

    int arr[n], even_arr[n], odd_arr[n]; 

    // get data from array
    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // print data
    printf("\n original arr elements : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }

    printf("\n");
    printf("----------------------------------------------------------------\n");

    // separate odd and even elements
    for (i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0){
            even_arr[even_count] = arr[i];
            even_count++;
        }
        else{
            odd_arr[odd_count] = arr[i];
            odd_count++;    
        }
    }

    printf("odd elements : \n");
    for (i = 0; i < odd_count; i++)
    {
        printf("%d ", odd_arr[i]);
    }

    printf("\n");

    printf("even elements : \n");
    for (i = 0; i < even_count; i++)
    {
        printf("%d ", even_arr[i]);
    }

}
// Write a program in C to read n number of values in an array and display it in reverse order. 


#include <stdio.h>

int main(){
    int i, n;

    printf("Enter size of array : ");
    scanf("%d", &n);

    int arr[n];

    // get data from array
    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // print data
    printf("\n Entered array elements are as below: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("----------------------------------------------------------------\n");

    printf("\n Array elements in reverse order are as below : \n");
    for (i = n-1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

}
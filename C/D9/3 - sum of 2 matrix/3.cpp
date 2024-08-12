// Two dimensional array ....
// Write a C program to  get data for of 3 x 3 matrix from user & get transposed of that matrix,
// and print the sum of both matrices.

#include <stdio.h>

int main(){
    int a[3][3];
    int i, j;

    // get data from array
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter data: ");
            scanf("%d", &a[i][j]);
        }
    }

    // print data
    printf("\nThe entered array elements are as below:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\n--------------------------------------------------------------\n");

    // print Transposed Matrix
    printf("\nTranspose of above matrix is as below:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }

    printf("\n--------------------------------------------------------------\n");
    
    // print sum of both Matrices
    printf("\nsum of both matrix is as below:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", (a[i][j] + a[j][i]));
        }
        printf("\n");
    }
    
}
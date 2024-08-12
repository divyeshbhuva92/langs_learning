// Two dimensional array ....

#include <stdio.h>

int main(){
    int a[3][2];
    int i, j;

    // get data from array
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter data: ");
            scanf("%d", &a[i][j]);
        }
    }

    // print data
    printf("\nThe entered array elements are as below:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
}
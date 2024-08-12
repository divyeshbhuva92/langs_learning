// Write a C program to show a days of the month based on entered the number of month.

#include <stdio.h>

int main(){
    int num;

    printf("Enter the number of the month: ");
    scanf("%d",&num);

    switch (num)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("This month has 31 days.\n");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("This month has 30 days.\n");
        break;
    case 2:
        printf("This month has 28 days.\n");
        break;

    default:
        printf("Invalid number.");
    }
}
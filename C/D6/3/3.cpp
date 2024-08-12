// Write a C program to read marks from keyboard & display equivalent grade
// according to following table.
// 100-80 = distinction
// 79-60 = first class
// 59-40 = second class

#include <stdio.h>

int main(){
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    if(marks < 101 ){
        if(marks >= 80 && marks <= 100){
            printf("Grade: Distinction");
        }
        else if(marks >= 60 && marks <= 79){
            printf("Grade: First Class");
        }
        else if(marks >= 40 && marks <= 59){
            printf("Grade: Second Class");
        }
    }
    else{
        printf("Enter should not be more than 100");
    }
}
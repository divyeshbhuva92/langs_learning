// Write a C program to check eligibility for blood dontation.
// Criteria : age between 18 to 60 years. & min.weight 45kg.

#include <stdio.h>

int main(){
    int age, weight;

    printf("Enter age : ");
    scanf("%d", &age);
    printf("Enter weight : ");
    scanf("%d", &weight);

    if(age > 18 && age < 60 && weight > 45){
        printf("You are eligible for donate blood.\n");
    } else {
        printf("You are not eligible for donate blood.\n");
    }

}
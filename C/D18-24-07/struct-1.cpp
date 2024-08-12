//

// union
// for memory saving.
// only access one variable at a time.
// use bytes of variable which has maximum size.

#include <stdio.h>

union student
{
    int roll_no;
    char name[10];
    int age;
};

int main()
{
    union student s1;

    printf("Enter name :");
    scanf("%s", s1.name);

    printf("Enter roll number :");
    scanf("%d", &s1.roll_no);

    printf("Enter age :");
    scanf("%d", &s1.age);

    printf("name : %s \n", s1.name);
    printf("roll number : %d \n", s1.roll_no);
    printf("age : %d \n", s1.age);
}

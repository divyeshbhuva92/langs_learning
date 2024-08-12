// structure within structure

#include <string.h>
#include <stdio.h>

struct date
{
    int d;
    int m;
    int y;
};

struct student
{
    int roll_no;
    char name[10];
    struct date birth_date;
};

int main()
{
    struct student s1;
    printf("Enter name :");
    scanf("%s", s1.name);

    printf("Enter roll number :");
    scanf("%d", &s1.roll_no);

    printf("Enter birth date :");
    scanf("%d", &s1.birth_date.d);
    printf("Enter birth month :");
    scanf("%d", &s1.birth_date.m);
    printf("Enter birth year :");
    scanf("%d", &s1.birth_date.y);

    printf("name : %s ", s1.name);
    printf("roll number : %d ", s1.roll_no);
    printf("birth date : %d-%d-%d", s1.birth_date.d, s1.birth_date.m, s1.birth_date.y);
}

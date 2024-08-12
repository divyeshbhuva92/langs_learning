// Structure ...

#include <stdio.h>
#include <string.h>

struct student
{
    int roll_no;
    char name[10];
    float SPI;
};

int main()
{
    struct student st1;
    st1.roll_no = 01;
    strcpy(st1.name, "Amit");
    st1.SPI = 7.24;

    printf("Student data : \n");
    printf("Roll no.: %d\n", st1.roll_no);
    printf("Name: %s\n", st1.name);
    printf("SPI: %f\n", st1.SPI);
}
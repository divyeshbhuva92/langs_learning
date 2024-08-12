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
    struct student st1[5];

    st1[0].roll_no = 01;
    strcpy(st1[0].name, "Amit");
    st1[0].SPI = 7.24;

    st1[1].roll_no = 02;
    strcpy(st1[1].name, "Dixit");
    st1[1].SPI = 6.8;

    st1[2].roll_no = 03;
    strcpy(st1[2].name, "Dev");
    st1[2].SPI = 7.8;

    st1[3].roll_no = 04;
    strcpy(st1[3].name, "Axit");
    st1[3].SPI = 6.7;

    st1[4].roll_no = 05;
    strcpy(st1[4].name, "Krish");
    st1[4].SPI = 8.48;

    printf("Student data : \n");
    for (int i = 0; i < 5; i++)
    {
        if (st1[i].SPI >= 7.0)
        {
            printf("Roll no.: %d\n", st1[i].roll_no);
            printf("Name: %s\n", st1[i].name);
            printf("SPI: %f\n", st1[i].SPI);
        }
    }
}
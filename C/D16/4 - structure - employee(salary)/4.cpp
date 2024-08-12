// Structure ...

#include <stdio.h>
#include <string.h>

struct employee
{
    int emp_no;
    float basic_salary;
    char city[20];
};

int main()
{
    struct employee emp1[5];
    int employee_number;

    emp1[0].emp_no = 01;
    emp1[0].basic_salary = 10000;
    strcpy(emp1[0].city, "Surat");

    emp1[1].emp_no = 02;
    emp1[1].basic_salary = 13500;
    strcpy(emp1[1].city, "Navsari");

    emp1[2].emp_no = 03;
    emp1[2].basic_salary = 15000;
    strcpy(emp1[2].city, "Bharuch");

    emp1[3].emp_no = 04;
    emp1[3].basic_salary = 7000;
    strcpy(emp1[3].city, "Vadodara");

    emp1[4].emp_no = 05;
    emp1[4].basic_salary = 8000;
    strcpy(emp1[4].city, "Valsad");

    printf("Enter employee number : ");
    scanf("%d", &employee_number);
    printf("num", employee_number);

    printf("Employee data : \n");
    for (int i = 0; i < 5; i++)
    {
        if (emp1[i].emp_no == employee_number)
        {
            float DA, HRA, MA, PF, Total_sal, Net_Salary;

            DA = (10.0 * emp1[i].basic_salary) / 100;
            HRA = (7.50 * emp1[i].basic_salary) / 100;
            MA = 300.00;
            PF = (12.50 * emp1[i].basic_salary) / 100;

            Total_sal = (emp1[i].basic_salary + DA + HRA + MA) / 1.0;
            Net_Salary = (Total_sal - PF) / 1.0;

            Total_sal = (emp1[i].basic_salary + DA + HRA + MA) / 1.0;
            Net_Salary = (Total_sal - PF) / 1.0;

            printf("Employee number : %d\n", emp1[i].emp_no);
            printf("Employee number : %f\n", Net_Salary);
            printf("Employee number : %s\n", emp1[i].city);
        }
    }
}
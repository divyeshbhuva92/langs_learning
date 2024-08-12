// Write a C program to prepare pay slips using the following data.
// DA = 10% of basic,   HRA = 7.50 % of basic,   MA = 300,
// PF = 12.50 % of basic,    Gross = basic + DA + HRA + MA,    NT = Gross - PF.

#include <stdio.h>

int main(){
    float basic_salary, DA, HRA, MA, PF, Gross_salary, Net_Salary;

    printf("Enter basic salary : ");
    scanf("%f", &basic_salary);

    DA = (10.0 * basic_salary) / 100;
    HRA = (7.50 * basic_salary) / 100;
    MA = 300.00;
    PF = (12.50 * basic_salary) / 100;

    Gross_salary = (basic_salary + DA + HRA + MA) / 1.0;
    Net_Salary = (Gross_salary - PF) / 1.0;


    printf("=========================================\n");
    printf("                SALARY SLIP              \n");
    printf("=========================================\n");

    printf("Basic : %f\n", basic_salary);
    printf("DA : %f\n", DA);
    printf("HRA : %f\n", HRA);
    printf("MA : %f\n", MA);
    printf("=========================================\n");
    printf("Gross : %f\n", Gross_salary);
    printf("=========================================\n");
    printf("PF : %f\n", PF);
    printf("=========================================\n");
    printf("NET : %f\n", Net_Salary);
    printf("=========================================\n");
}
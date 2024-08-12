// string.

#include <stdio.h>
#include <string.h>

int main()
{
    char city1[10], city2[10];
    int is_equal;

    printf("Enter city 1: ");
    // scanf("%s", city);        // dont put "&" for string
    gets(city1);
    printf("City2 name is ");
    gets(city2);

    printf("City1 name is ");
    printf("%s \n", city1);

    // strrev(city);
    // puts(city);

    // strcpy(city2, city1);
    // printf("city 2 name is %s \n", city2);

    // strupr(city2);
    // printf("city 2 name is %s \n", city2);

    // strlwr(city2);
    // printf("city 2 name is %s \n", city2);

    is_equal = strcmp(city2, city1);
    is_equal == 0 ? printf("Both city names are equal") : printf("Both city names are different");
}
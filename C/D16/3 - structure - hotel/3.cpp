// Structure ... Hotel

#include <stdio.h>
#include <string.h>

struct hotel
{
    char name[20];
    float rating;
    int price;
};

int main()
{
    struct hotel h1[5];

    strcpy(h1[0].name, "Hotel RiverView");
    h1[0].rating = 4.5;
    h1[0].price = 2000;

    strcpy(h1[1].name, "Hotel LackSide");
    h1[1].rating = 3.8;
    h1[1].price = 1500;

    strcpy(h1[2].name, "Hotel Raj");
    h1[2].rating = 3.2;
    h1[2].price = 1200;

    strcpy(h1[3].name, "Hotel Krishna");
    h1[3].rating = 4.4;
    h1[3].price = 1800;

    strcpy(h1[4].name, "Hotel Sevenstar");
    h1[4].rating = 4.7;
    h1[4].price = 2000;

    printf("Student data : \n");
    for (int i = 0; i < 5; i++)
    {
        if (h1[i].rating >= 4.0)
        {
            printf("Name: %s\n", h1[i].name);
            printf("Rating: %f\n", h1[i].rating);
            printf("Price (per day): %d\n", h1[i].price);
        }
    }
}
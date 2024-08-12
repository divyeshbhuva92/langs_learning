// user define datatypes = enum

#include <stdio.h>

enum week
{
    sun = 1,
    mon,
    tues,
    wed,
    thurs,
    fri,
    sat
};

int main()
{
    enum week today;
    today = wed;
    printf("%d day", today);
    return 0;
}
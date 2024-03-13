
#include <stdio.h>

int main()
{
    int id = 0;
    char name[20];
    float unit = 0, bill = 0;

    printf("Please enter your customer ID : ");
    scanf("%d", &id);
    printf("Please enter your name : ");
    scanf("%s", name);
    printf("Please enter your consumed units : ");
    scanf("%f", &unit);

    if (unit < 350)
    {
        bill = unit * 1.20;
    }
    else if (unit >= 350 && unit < 600)
    {
        bill = unit * 1.50;
    }
    else if (unit >= 600 && unit < 800)
    {
        bill = unit * 1.80;
    }
    else
    {
        bill = unit * 2;
    }

    printf("Your electricity bill is :%f", bill);
    return 0;
}
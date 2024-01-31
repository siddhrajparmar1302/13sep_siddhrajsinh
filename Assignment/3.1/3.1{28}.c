#include<stdio.h>
int main()
{
    int days, months, year;
    printf("Enter year :");
    scanf("%d",&year);
    days=year*365;
    months=year*12;
    printf("Year into days %d\n",days);
    printf("Year into months%d, months");
    return 0;
}
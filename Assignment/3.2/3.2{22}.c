#include <stdio.h>
int main()
{
    float b_salary = 0, g_salary = 0, hra = 0, da = 0;
    printf("Please enter your basic salary : ");
    scanf("%f", &b_salary);
    if (b_salary <= 10000)
    {
        hra = b_salary * 0.20;
        da = b_salary * 0.80;
    }
    else if (b_salary <= 20000)
    {
        hra = b_salary * 0.25;
        da = b_salary * 0.90;
    }
    else
    {
        hra = b_salary * 0.30;
        da = b_salary * 0.95;
    }
    g_salary = b_salary + hra + da;
    printf("Your gross salary : %.2f", g_salary);
    return 0;
}
// Write a c program to print factorial of given number

#include <stdio.h>

int main()
{
    int no, factorial = 1;

    printf("Enter any number to find factorial :");
    scanf("%d", &no);

    while (no > 0)
    {
        factorial = factorial * no;
        no--;
    }
    printf("Factorial of given number is : %ld", factorial);
    return 0;
}
//Write a program make a summation of given number

#include <stdio.h>

int main()
{

    int no, rem, sum = 0;

    printf("Enter any number : ");
    scanf("%d", &no);

    while (no != 0)
    {
        rem = no % 10;
        sum=sum+rem;
        no = no / 10;
    }
    printf("Sum : %d", sum);

    return 0;
}
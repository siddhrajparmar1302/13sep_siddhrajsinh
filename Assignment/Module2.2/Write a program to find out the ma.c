// Write a program to find out the max from given number

#include <stdio.h>

int main()
{

    int no, rem, max = 0;

    printf("Enter any number : ");
    scanf("%d", &no);

    while (no != 0)
    {
        rem = no % 10;
        if (rem > max)
        {
            max = rem;
        }
        no = no / 10;
    }
    printf("Max number : %d", max);

    return 0;
}
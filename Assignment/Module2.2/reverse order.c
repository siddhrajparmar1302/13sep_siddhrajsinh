// write a program to print number in reverse order.

#include <stdio.h>

int main()
{

    int no, rem, rev = 0;

    printf("Enter number you want to reverse : ");
    scanf("%d", &no);

    while (no != 0)
    {
        rem = no % 10;
        rev = rev * 10 + rem;
        no = no / 10;
    }
    printf("Reverse number : %d", rev);
    return 0;
}
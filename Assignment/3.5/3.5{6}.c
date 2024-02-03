// Write a program in c to count the total number of alphabets,digits and special character in a string.
#include <stdio.h>
int main()
{
    char a[50];
    int alpha = 0, digits = 0, speci = 0, i;
    printf("Enter any string :");
    gets(a);
    for (i = 0; a[i] != 0; i++)
    {
        if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z'))
        {
            alpha++;
        }
        else if (a[i] >= '0' && a[i] <= '9')
        {
            digits++;
        }
        else
        {
            speci++;
        }
    }
    printf("\nTotal alphabets :%d", alpha);
    printf("\nTotal digits :%d", digits);
    printf("\nTotal special characters :%d", speci);
    return 0;
}
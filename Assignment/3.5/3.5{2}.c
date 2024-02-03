// Write a c program to separate individual character from a string.
#include <stdio.h>
int main()
{
    char c[20];
    int i;
    printf("Enter any string: ");
    gets(c);
    for (i = 0; c[i] != 0; i++)
    {
        printf(" %C", c[i]);
    }
    return 0;
}
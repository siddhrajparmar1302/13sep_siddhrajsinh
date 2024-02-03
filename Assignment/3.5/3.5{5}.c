// write a c program to compare two strings without using strings library functions.
#include <stdio.h>
int main()
{
    char a[50], b[50];
    int i, j, com = 0;
    printf("Enter the first string:");
    gets(a);
    printf("Enter the second string:");
    gets(b);
    for (i = 0; a[i] != 0; i++)
        ;
    for (j = 0; b[j] != 0; j++)
        ;
    com = i - j;
    printf("comparision of strings:%d", com);
    return 0;
}	
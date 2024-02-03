// Write a c program in c to find the length of a string without using library functions.
#include <stdio.h>
int main()
{
    char c[20];
    int i;
    printf("Enter any string: ");
    gets(c);
    for (i = 0; c[i] != '\0'; i++)
        ;
    printf("length of the string %d", i);
    return 0;
}
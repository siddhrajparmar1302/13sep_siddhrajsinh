// Write a c program to print individual character of a string in reverse order.
#include <stdio.h>
#include <string.h>
int main()
{
    char c[20];
    int a = 0;
    printf("Enter any string:");
    gets(c);
    a = strlen(c);
    for (a = (a - 1); c[a] != 0; a--)
    {
        printf("%C", c[a]);
    }
    return 0;
}
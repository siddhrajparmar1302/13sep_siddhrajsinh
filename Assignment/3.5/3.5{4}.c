// Write a c program to count the total number of words in a string.
#include <stdio.h>
#include <string.h>
int main()
{
    char c[50];
    int i, count = 1;
    printf("Enter any string:");
    gets(c);
    i = strlen(c);
    for (i = (i - 1); c[i] != 0; i--)
    {
        if (c[i] == ' ')
        {
            count++;
        }
    }
    printf("Total words:%d", count);
    return 0;
}
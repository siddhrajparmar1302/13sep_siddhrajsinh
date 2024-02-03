// Write a program tp copy one string to another string.
#include <stdio.h>
#include <string.h>
int main()
{
    char a[50], b[50];
    printf("Enter the first strings:");
    gets(a);
    printf("Enter the second strings:");
    gets(b);
    strcpy(b, a);
    printf("\nFirst string:%s", a);
    printf("\nSecond string:%s", b);
    return 0;
}

#include<stdio.h>
int main()
{
    char school[30];
    printf("Enter School Name :");
    scanf("%s",&school);
    printf("Abreviated school name : ");
    printf("%c%c", school[20],school[30]);
    return 0;
}
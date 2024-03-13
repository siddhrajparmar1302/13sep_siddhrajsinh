#include<stdio.h>
int main()
{
    int b,s,a;
    printf("Enter buy value :");
    scanf("%d",&b);
    printf("Enter sell value");
    scanf("%d",&s);
    a=s-b;
    if (s>b)
    {
        printf("%d profit",a);
    }
    else
    {
        printf("%d loss",a);
    }
}
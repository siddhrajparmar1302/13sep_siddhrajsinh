// WAP to swap two numbers without using third variable
#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    a=a-b;
    b=a+b;
    a=b-a;
    printf("\nAfter swapping the value.........");
    printf("\nThe value of A is : %d",a);
    printf("\nThe value of B is : %d",b);
}
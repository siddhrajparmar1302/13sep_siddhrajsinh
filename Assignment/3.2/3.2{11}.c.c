// WAP to find number is even or odd using ternary operator
#include<stdio.h>
void main()
{
    int num; // variables
    printf("Enter a number : ");
    scanf("%d",&num); 
    if (num % 2 == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}
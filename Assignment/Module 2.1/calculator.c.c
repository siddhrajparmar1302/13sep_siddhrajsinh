// WAP to make Simple calculator (to make addition, subtraction, multiplication, division, and modulo)
#include <stdio.h>
void main()
{
    
    int a,b;
    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("Enter the second number : ");
    scanf("%d",&b);
    printf("\nAddition is: %d",a+b);
    printf("\nSubtraction is: %d",a-b);
    printf("\nMultiplication is: %d",a*b);
    printf("\nDivision is: %.1f",(float)a / (float)b;
    printf("\nModulo is: %d",a%b);
}
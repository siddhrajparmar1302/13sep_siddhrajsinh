#include <stdio.h>
int main() 
{
    int a, b, c, perimeter;
    printf("Enter value of triangle: ");
    scanf("%d%d%d", &a,&b,&c);
    perimeter = a + b + c;
    printf("The circumference (perimeter) of the triangle is: %d", perimeter);
    return 0;
}
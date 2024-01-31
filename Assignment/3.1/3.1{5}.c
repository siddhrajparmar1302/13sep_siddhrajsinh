#include <stdio.h>
int main() 
{
    int a; 
    printf("Enter number: ");
    scanf("%d", &a);
    a = a*a*a;
    printf("The surface area of the Cube is : %d", a);
    return 0;
}
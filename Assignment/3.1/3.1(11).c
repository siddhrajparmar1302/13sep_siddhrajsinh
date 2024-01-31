#include <stdio.h>
int main() 
{
    int a, circumference;
    printf("Enter the side length of the square: ");
    scanf("%d", &a);
    circumference = 4 * a;
    printf("The circumference of the square is: %d", circumference);
    return 0;
}
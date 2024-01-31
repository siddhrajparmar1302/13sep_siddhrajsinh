#include <stdio.h>
int main() 
{
    int a; 
    printf("Enter the side of the square: ");
    scanf("%d", &a);
    a = a * a;
    printf("The area of the square is : %d", a);
    return 0;
}
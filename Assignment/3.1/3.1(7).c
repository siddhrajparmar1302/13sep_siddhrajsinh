#include <stdio.h>
int main() 
{
    int width, length, area;
    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);
    area = width * length;
    printf("The area of the rectangle is: %d\n", area);
    return 0;
}
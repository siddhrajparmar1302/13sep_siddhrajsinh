#include <stdio.h>
int main()
{
    int length, width, perimeter;
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);
    perimeter = 2 * (length + width);
    printf("The perimeter of the rectangle is: %d", perimeter);
    return 0;
}
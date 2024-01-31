#include <stdio.h>
int main() 
{
   int width, height, length, surfaceArea;
    printf("Enter the w, h, l of rectangular prism: ");
    scanf("%d%d%d", &width,&height,&length);
    surfaceArea = 2 * (width * length + height * length + height * width);
    printf("The surface area of the rectangular prism is: %d", surfaceArea);
    return 0;
}
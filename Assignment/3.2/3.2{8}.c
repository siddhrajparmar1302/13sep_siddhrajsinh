#include <stdio.h>
int main()
{
    float height;
    printf("Enter your height in centimeters: ");
    scanf("%f", &height);
    if (height < 150) 
    {
        printf("Short height.\n");
    } 
    else if (height >= 150 && height <= 180) 
    {
        printf("Average height.\n");
    } else {
        printf("Tall height.\n");
    }
    return 0;
}
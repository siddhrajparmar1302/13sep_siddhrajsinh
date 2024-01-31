#include <stdio.h>
int main() 
{
    float km, m;
    printf("Enter distance in kilometers: ");
    scanf("%f", &km);
    m= km * 1000;
    printf("kilometers to meters=%f",m);
    return 0;
}
// Write a c program to check weather a triangle can be formed with the given values for the angles.
#include <stdio.h>
int main()
{
    int a, b, c, sum;
    printf("Please enter three angles of the triangle:");
    scanf("%d%d%d", &a, &b, &c);
    sum = a + b + c;
    if (sum == 180 && a != 0 && b != 0 && c != 0)
    {
        printf("You can form a triangle");
    }
    else
    {
        printf("You can't form a triangle");
    }
    return 0;
}
#include <stdio.h>
int main() 
{
    int num1, num2, num3, mini;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    mini = (num1 < num2) ? (num1 < num3 ? num1 : num3) : (num2 < num3 ? num2 : num3);
    printf("Minimum among the 3 numbers is: %d\n", mini);
    return 0;
}
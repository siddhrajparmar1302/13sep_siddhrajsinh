//WAP to accept 5 numbers from user and check entered number is even or odd
#include <stdio.h>
int main() 
{
    int numbers[5];
    for (int i = 0; i < 5; ++i)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    printf("\nChecking if each number is even or odd:\n");
    for (int i = 0; i < 5; ++i)
    {
        if (numbers[i] % 2 == 0)
        {
            printf("Number %d is even.\n", numbers[i]);
        }
        else
        {
            printf("Number %d is odd.\n", numbers[i]);
        }
    }
    return 0;
}
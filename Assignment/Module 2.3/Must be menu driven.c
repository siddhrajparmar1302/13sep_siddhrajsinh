// Must be menu driven
#include <stdio.h>
int main()
{
    int choice;
    float num1, num2, result;
    printf("Choose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Taking input numbers
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Performing the selected operation using switch
    switch(choice) 
    {
        case 1:
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;
        case 4:
            // Checking if the divisor is not zero
            if (num2 != 0)
            {
                result = num1 / num2;
                printf("Result: %.2f\n", result);
            } else
            {
                printf("Error! Division by zero is undefined.\n");
            }
            break;
        default:
            printf("Invalid choice! Please enter a number between 1 and 4.\n");
    }

    return 0;
}
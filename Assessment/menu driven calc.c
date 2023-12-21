// WAP Create menu driven calculator using function 
#include <stdio.h>

// Function declarations
void displayMenu();
void performOperation(int choice);
void addition();
void subtraction();
void multiplication();
void division();

int main() {
    int choice;

    do {
        // Display menu
        displayMenu();

        // Get user choice
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        performOperation(choice);

    } while (choice != 5); // Continue until the user chooses to exit (option 5)

    return 0;
}

// Function to display the menu
void displayMenu() {
    printf("Simple Calculator Menu\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
}

// Function to perform the chosen operation
void performOperation(int choice) {
    switch (choice) {
        case 1:
            addition();
            break;
        case 2:
            subtraction();
            break;
        case 3:
            multiplication();
            break;
        case 4:
            division();
            break;
        case 5:
            printf("Exiting the program.\n");
            break;
        default:
            printf("Invalid choice! Please enter a number between 1 and 5.\n");
    }
}

// Function for addition
void addition() {
    double num1, num2;
    printf("Enter two numbers to add:\n");
    scanf("%lf %lf", &num1, &num2);
    double result = num1 + num2;
    printf("Result: %lf\n", result);
}

// Function for subtraction
void subtraction() {
    double num1, num2;
    printf("Enter two numbers to subtract:\n");
    scanf("%lf %lf", &num1, &num2);
    double result = num1 - num2;
    printf("Result: %lf\n", result);
}

// Function for multiplication
void multiplication() {
    double num1, num2;
    printf("Enter two numbers to multiply:\n");
    scanf("%lf %lf", &num1, &num2);
    double result = num1 * num2;
    printf("Result: %lf\n", result);
}

// Function for division
void division() {
    double num1, num2;
    printf("Enter two numbers to divide:\n");
    scanf("%lf %lf", &num1, &num2);

    // Check for division by zero
    if (num2 != 0) {
        double result = num1 / num2;
        printf("Result: %lf\n", result);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}
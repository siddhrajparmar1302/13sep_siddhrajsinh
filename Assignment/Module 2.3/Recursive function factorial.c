// Recursive function to calculate factorial
#include <stdio.h>
unsigned long long factorial(int n)
{
    // Base case: factorial of 0 is 1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // Recursive case: n! = n * (n-1)!
        return n * factorial(n - 1);
    }
}

int main() {
    int num;

    // Input from the user
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Check if the input is a non-negative integer
    if (num < 0) {
        printf("Please enter a non-negative integer.\n");
    } else {
        // Call the recursive function to calculate factorial
        unsigned long long result = factorial(num);

        // Output the result
        printf("Factorial of %d = %llu\n", num, result);
    }

    return 0;
}
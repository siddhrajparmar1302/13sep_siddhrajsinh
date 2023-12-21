// Define the structure for Employee
#include <stdio.h>
struct Employee 
{
    char empName[50];
    char empAddress[100];
    int age;
};

// Function to input employee information
void inputEmployee(struct Employee *emp) {
    printf("Enter Employee Name: ");
    scanf("%s", emp->empName);
    printf("Enter Employee Address: ");
    scanf("%s", emp->empAddress);
    printf("Enter Employee Age: ");
    scanf("%d", &emp->age);
}

// Function to print employee information
void printEmployee(const struct Employee *emp) {
    printf("\nEmployee Information:\n");
    printf("Employee Name: %s\n", emp->empName);
    printf("Employee Address: %s\n", emp->empAddress);
    printf("Employee Age: %d\n", emp->age);
}

int main()
{
    // Declare an array of Employee structures for 5 employees
    struct Employee employees[5];

    // Input information for each employee
    for (int i = 0; i < 5; ++i) {
        printf("\nEnter details for Employee %d:\n", i + 1);
        inputEmployee(&employees[i]);
    }

    // Print information for each employee
    for (int i = 0; i < 5; ++i) {
        printEmployee(&employees[i]);
    }

    return 0;
}

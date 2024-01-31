#include <stdio.h>
int main() 
{
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);
    int totalApples = numStudents * 5;
    printf("Total apples required: %d", totalApples);
    return 0;
}
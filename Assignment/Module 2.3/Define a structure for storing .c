// Define a structure for storing information about a student
#include <stdio.h>
struct Student 
{
    char name[50];
    int age;
    float gpa;
};

// Define a union for storing information about a course
union Course
{
    int courseCode;
    char courseName[50];
    float courseFee;
};

int main() 
{
    // Example using a structure.
    struct Student student1;
    strcpy(student1.name, "chirag varde");
    student1.age = 20;
    student1.gpa = 3.8;

    printf("Student Information:\n");
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("GPA: %.2f\n", student1.gpa);
    printf("\n");

    // Example using a union.
    union Course course1;
    course1.courseCode = 101;
    printf("Course Information:\n");
    printf("Course Code: %d\n", course1.courseCode);

    strcpy(course1.courseName, "Computer Science");
    printf("Course Name: %s\n", course1.courseName);

    course1.courseFee = 500.50;
    printf("Course Fee: %.2f\n", course1.courseFee);

    return 0;
}
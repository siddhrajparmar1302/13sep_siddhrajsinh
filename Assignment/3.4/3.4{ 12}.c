//WAP to accept students name and store them in the array
#include <stdio.h>
int main()
{
    char names[5][50]; 
    for (int i = 0; i < 5; ++i)
    {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", names[i]);
    }
    printf("\nNames of the students:\n");
    for (int i = 0; i < 5; ++i)
    {
        printf("Student %d: %s\n", i + 1, names[i]);
    }
    return 0;
}
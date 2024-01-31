#include <stdio.h>
int main() 
{
    int asciiValue;
    printf("Enter ASCII value: ");
    scanf("%d", &asciiValue);
    char characterValue = (char)asciiValue;
    printf("Character: %c\n", characterValue);
    return 0;
}
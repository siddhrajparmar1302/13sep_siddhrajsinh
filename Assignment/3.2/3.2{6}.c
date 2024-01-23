// find the character is vowel or not
#include <stdio.h>
int main() 
{
    char character;
    printf("Enter a character: ");
    scanf("%c", &character);
    // Check if the character is a vowel
    if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u' ||
        character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U') {
        printf("%c is a vowel.\n", character);
    } else {
        printf("%c is not a vowel.\n", character);
    }
    return 0;
}
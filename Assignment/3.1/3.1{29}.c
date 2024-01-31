// Convert minutes into seconds and hours 
#include <stdio.h>
int main() 
{
    int minutes;
    printf("Enter the number of minutes: ");
    scanf("%d", &minutes);
    int hours = minutes / 60;
    int seconds = minutes * 60;
    printf("%d minutes is equal to %d hours and %d seconds.\n", minutes, hours, seconds);
    return 0;
}
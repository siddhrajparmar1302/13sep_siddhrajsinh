#include <stdio.h>
void main()
{
    int x[10],i;
    for(i=0;i<9;i++)
    {
        printf("Enter the value : ");
        scanf("%d",&x[i]);
    }
    printf("\nThe values are : ");
    for(i=0;i<9;i++)
    {
        printf("%d, ",x[i]);
    }    
}
#include <stdio.h>
int main()
{
    int maths, phy, chem, total, totalmp;

    printf("Enter the marks of maths:");
    scanf("%d", &maths);
    printf("Enter the marks of physics:");
    scanf("%d", &phy);
    printf("Enter the marks of chemistry:");
    scanf("%d", &chem);

    total = maths + phy + chem;
    totalmp = maths + phy;

    printf("Total in all three subjects : %d\n", total);
    printf("Total in maths and physics subjects : %d\n", totalmp);

    if (maths >= 65 && phy >= 55 && chem >= 50 && total >= 190 || totalmp >= 140)
    {
        printf("The candidate is eligible");
    }
    else
    {
        printf("The candidate is not eligible");
    }

    return 0;
}
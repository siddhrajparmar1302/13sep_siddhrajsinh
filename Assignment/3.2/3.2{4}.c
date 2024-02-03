#include<stdio.h>
int main()
{
    int a,b,s;
    printf("Enter number :" );
    scanf("%d%d", &a,&b);
    printf("Enter 1 addition or 2 subtraction or 3 multiplication or 4 division or 5 modulo :");
    scanf("%d",&s);
    if(s==1)
    {
        printf("sum=%d",a+=b);
    }
    else if (s==2)
    {
        printf("sum=%d",a-=b);
    }
    else if (s==3)
    {
        printf("mul=%d",a*=b);
    }
    else if (s==4)
    {
        printf("div=%d",a/=b);
    }
    else
    printf("mod=%d",a%=b);
    return 0;
}
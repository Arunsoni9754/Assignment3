#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the value of a,b,c of the quadratic equation ax^2+bx+c=0 repectively:-");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    d=(b*b)-(4*a*c);
    if(d>0)
    {
        printf("The roots are real and distinct");
    }
    else if (d==0)
    {
        printf("The roots are equal");
    }
    else
    {
        printf("The roots are imaginary");
    }
}

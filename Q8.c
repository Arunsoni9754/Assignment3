#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the year ");
    scanf("%d",&n);
    if((n%4==0) && ((n%400==0)||(n%100!=0)))
    {
        printf("This is a leap year");
    }
    else 
    {
        printf("This is not a leap year");
    }
}

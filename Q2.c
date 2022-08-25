#include<stdio.h>
int main()
{
    int i,j;
    printf("Enter the number to be check:-");
    scanf("%d",&i);
    if(i%5==0)
    {
        printf("The number is divisible by 5");
    }
    else
    {
        printf("The number is not divisible by 5");
    }
}

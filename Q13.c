#include<stdio.h>
int main()
{
    int i,j;
    printf("Enter the number to be check:-");
    scanf("%d",&i);
    if(i%2==0&&i%3==0)
    {
        printf("The number is divisible by 3 and 2");
    }
    else
    {
        printf("The number is not divisible");
    }
return 0;
}

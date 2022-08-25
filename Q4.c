#include<stdio.h>
int main()
{
    int i,j;
    printf("Enter the number to be check:-");
    scanf("%d",&i);
    if(i&1)
    {
        printf("The number is odd");
    }
    else
    {
        printf("The number is even");
    }
return 0;
}

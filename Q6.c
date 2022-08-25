#include<stdio.h>
int main()
{
    int i,j;
    printf("Enter the first number:-");
    scanf("%d",&i);
     printf("Enter the another number:-");
    scanf("%d",&j);
    if(i>j)
    {
        printf("%d",i);
    }
    else if(j>i)
    {
        printf("%d",j);
    }
    else
    {
        printf("%d",i);
    }
return 0;
}

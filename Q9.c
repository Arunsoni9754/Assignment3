#include<stdio.h>
int main()
{
    int i,j,k;
    printf("Enter the first number:- ");
    scanf("%d",&i);
     printf("Enter the first number:- ");
    scanf("%d",&j);
     printf("Enter the first number:- ");
    scanf("%d",&k);
    if(i>j&&i>k)
    {
    printf("%d",i);
    }
    else if (j>k)
    {
        printf("%d",j);
    }
    else if (i==j)
    {
        printf("%d",i);
    }
    else if (j==k)
    {
        printf("%d",j);
    }
    else if (i==k)
    {
        printf("%d",k);
    }
    else
    {
        printf("%d",k);
    }

    return 0;
}

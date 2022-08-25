#include<stdio.h>
int main()
{
    int i,j,k;
    printf("Enter the length of the sides of a traingle:-");
    scanf("%d",&i);
    scanf("%d",&j);
        scanf("%d",&k);

    if((i+j)>k)
    {
        printf("Triangle is Valid");
    }
    else
    {
        printf("Triangle is not valid");
    }
}

#include<stdio.h>
int main()
{
    char j;
    printf("Enter the number to be check:-");
    scanf("%c",&j);
    int i=j;
    if(i>64&&i<91)
    {
        printf("Upper case");
    }
    else if(i>=97&&i<123)
    {
        printf("Lower case");
    }
}

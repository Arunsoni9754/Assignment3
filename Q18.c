#include<stdio.h>
int main()
{
    int i,j;
    printf("Enter the month number to be checked from 1 to 12:-");
    scanf("%d",&i);
    if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
    {
        printf("The number of days are 31");
    }
    else if(i==4||i==6||i==9||i==11)
    {
        printf("The number od days are 30");
    }
    else
    {
        printf("THe number of days is 28 or 29");
    }
return 0;
}

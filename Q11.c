#include<stdio.h>
int main()
{
    int i,j,k,l,m,t,p;
    printf("Enter the marks of 1st subject:-");
    scanf("%d",&i);
    printf("Enter the marks of 2nd subject:-");
    scanf("%d",&j);
    printf("Enter the marks of 3rd subject:-");
    scanf("%d",&k);
    printf("Enter the marks of 4th subject:-");
    scanf("%d",&l);
    printf("Enter the marks of 5th subject:-");
    scanf("%d",&m);
    t=i+j+k+l+m;
    p=t/5;
    if(p>33)
    {
        printf("The student is pass");
    }
    else
    {
        printf("The student is fail");
    }
return 0;
}

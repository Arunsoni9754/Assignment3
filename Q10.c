#include<stdio.h>
int main()
{
    float p,l,cp,sp;
    printf("Enter the cost price:-");
    scanf("%f",&cp);
    printf("Enter the selling price:-");
    scanf("%f",&sp);

    if(sp>cp)
    {
        p=(sp-cp)*100/cp;
        printf("The profit percentage is %f ",p);
    }
    else if(cp>sp)
    {l=(cp-sp)*100/cp;
    
        printf("The loss percentage is %f ",l);
    }
}

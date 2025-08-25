#include<stdio.h>
int main()
{
    int cp,sp,p,l;
    printf("Enter  Cost Price:-\n");
    scanf("%d",&cp);
    printf("Enter Selling Price:- \n");
    scanf("%d",&sp);
    if(sp>cp)
    {
        p=sp-cp;
        printf("Total Profit= %d",p);
    }
    else
    {
        l=(cp-sp);
        printf("Total Loss= %d",l);
    }
}
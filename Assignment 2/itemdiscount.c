#include<stdio.h>
int main()
{
    int q1,q2,q3,r1,r2,r3;
    float tsale;
    double dic;
    printf("Enter Quantity for 1st Item:- ");
    scanf("%d",&q1);
    printf("\nEnter Rate for 1st Item:- ");
    scanf("%d",&r1);
    printf("\nEnter Quantity for 2nd Item:- ");
    scanf("%d",&q2);
    printf("\nEnter Rate for 2nd Item:- ");
    scanf("%d",&r2);
    printf("\nEnter Quantity for 3rd Item:- ");
    scanf("%d",&q3);
    printf("\nEnter Rate for 3rd Item:- ");
    scanf("%d",&r3);
    
    tsale=(q1*r1)+(q2*r2)+(q3*r3);
    printf("\nTotal Sale= %lf",tsale);
    if(tsale>=1000 && tsale<=3000)
    {
        dic=tsale*(0.2);
        printf("\nTotal Discount= %lf",dic);
    }
    else if(tsale >=3000 && tsale >5000)
    {
        dic=tsale*(0.15);
        printf("\nTotal Discount= %lf",dic);
    }
    else if(tsale >=5000 && tsale >=10000)
    {
        dic=(tsale*(0.08));
        printf("\nTotal Discount  = %lf",dic);
    }
    else
    printf("\nYou are Not Eligible for Discount!!!!");
    return 0;
}
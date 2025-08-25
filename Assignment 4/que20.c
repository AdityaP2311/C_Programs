#include<stdio.h>
int main()
{
    float x,n,i,result=1;
    printf("Enter Value of X: ");
    scanf("%f",&x);
    printf("Enter Value of N: ");
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        result=result*x;
    }
    printf("%f^%f=%f",x,n,result);
    return 0;
}
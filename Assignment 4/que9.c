#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter Range: ");
    scanf("%d",&n);

    //With Loop 

    for(i=1;i<=n;i++)
    {
       sum+=i;
    }
    printf("Sum of 1 to %d Numbers = %d",n,sum);

    //Without Loop

    sum=(n*(n+1))/2;

    printf("\n Sum of 1 to %d Numbers = %d",n,sum);
    return 0;
}
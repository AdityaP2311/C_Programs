#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter Numbers to find sum of Factors:");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    printf("\n Sum of Factors of %d are %d",n,sum);
    return 0;
}
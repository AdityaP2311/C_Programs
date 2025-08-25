#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter Range ");
    scanf("%d",&n);

    for(i=2;i<=n;i+=2)
    {
        sum+=i;
    }
     printf("Sum of 1 to %d  Even Numbers are  %d",n,sum);
    return 0;
}
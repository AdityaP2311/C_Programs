#include<stdio.h>
int main()
{
    int n,i,sum=0,cnt=0;
    printf("Enter Numbers to find Factors :");
    scanf("%d",&n);
    printf("\nFactors of %d are \n",n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
             printf("%d  ",i);
             cnt++;
             sum+=i;
        }
           
    }
    printf("\nCount of Factors of %d are %d\n",n,cnt);
    printf("Sum of Factors of %d are %d\n",n,sum);

    return 0;
}
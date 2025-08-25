#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter value of N: \n");
    scanf("%d",&n);
    printf("Perfect Numbers from 1 to %d are: \n",n);
    for(i=1;i<=n;i++)
    {
        int sum=0;
        int num=i;
        for(j=1;j<=num/2;j++)
        {
            if(num%j==0)
            {
                sum+=j;
            }
        }
        if(sum==num)
            printf("%d ",num);
    }
    return 0;
}
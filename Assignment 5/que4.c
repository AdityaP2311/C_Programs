#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j;
    printf("Enter Value of n: \n");
    scanf("%d",&n);
    printf("Prime Numbers from 1 to %d are: \n",n);
    for(i=2;i<=n;i++)
    {
        int cnt=0;
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                cnt++;
                break;
            }
        }
        if(cnt==0)
        {
            printf("%d ",i);
        }
        
    }
}

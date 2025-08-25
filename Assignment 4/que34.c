#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,cnt=0;
    printf("Enter a Number ");
    scanf("%d",&n);
    int temp=n;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            cnt++;
            break;
        }
    }
    if(cnt==0)
        printf("%d is a Prime Number",temp);
    else
        printf("%d is not a Prime Number",temp);
    return 0;
}
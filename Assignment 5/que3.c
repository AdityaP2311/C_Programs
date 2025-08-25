#include<stdio.h>
#include<math.h>
int main()
{
    int i,y,n,temp,rem=0;
    printf("Enter the Value of n :\n");
    scanf("%d",&y);

    printf("Armstrong Numbers form 1 to %d are :\n ",y);
    for(n=1;n<=y;n++)
    {
        int cnt=0;
        float arm=0;
        temp=n;
        while(temp>0)
        {
            cnt++;
            temp/=10;
        }
        temp=n;
        while(temp>0)
        {
            rem=temp%10;
            arm=arm+pow(rem,cnt);
            temp/=10;
        }
        if(arm==n)
        {
            printf("%d ",n);
        }
    }
}
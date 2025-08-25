#include<stdio.h>
#include<math.h>
int main()
{
    int n,temp,rem=0,cnt=0;
    float arm=0;
    printf("Enter a Number:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        cnt++;
        n/=10;
    }
    n=temp;
    while(n>0)
    {
        rem=n%10;
        arm+=pow(rem,cnt);
        n/=10;
    }
    if(temp==arm)
        printf("%d is Armstrong Number",temp);
    else
        printf("%d is not a Armstrong Number",temp);
    return 0;
}
#include<stdio.h>
int main()
{
    int n,i,cnt=0;
    printf("Enter Number to Count Factors:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            cnt++;
    }
    printf("\nCount of Factors of %d are %d",n,cnt);
    return 0;
}
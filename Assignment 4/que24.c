#include<stdio.h>
int main()
{
    int n,cnt=0,sum=0;
    printf("Enter a Number: ");
    scanf("%d",&n);
    int temp=n;
    while(n>0)
    {
        int rem=n%10;
        sum+=rem;
        n/=10;
    }
    printf("Sum of Digits of %d are %d",temp,sum);\
    return 0;

}
#include<stdio.h>
int main()
{
    int n,cnt=0;
    printf("Enter a Number: ");
    scanf("%d",&n);
    int temp=n;
    while(n>0)
    {
        cnt++;
        n=n/10;
    }
    printf("Count of Number of Digits of %d are %d",temp,cnt);
}
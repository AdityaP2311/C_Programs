#include<stdio.h>
int main()
{
    int n,rev=0,temp;
    printf("Enter a Number: ");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        int rem= n%10;
        rev=rev*10+rem;
        n/=10;
    }
    printf("Reverse of %d is %d ",temp,rev);
    return 0;
}
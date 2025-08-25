#include<stdio.h>
int main()
{
    int n,temp,rev=0;
    printf("Enter a Number: ");
    scanf("%d",&n);
    temp=n;
     while(n>0)
    {
        int rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    printf("Digits of %d are \n",temp);
    while(rev>0)
    {
         int temp=rev%10;
         printf("%d ",temp);
         rev=rev/10;
    }
    return 0;
}
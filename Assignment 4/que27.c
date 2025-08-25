#include<stdio.h>
int main()
{
    int n,rev=0,temp;
    printf("Enter a Number: ");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        int rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    if(rev==temp)
        printf("%d is Palindrome Number",temp);
    else
        printf("%d is not a Palindrome Number",temp);
    return 0;
}
#include<stdio.h>
int main()
{
    int n,temp,rem;
    int even=0,odd=0,zero=0;
    printf("Enter an Integer: ");
    scanf("%d",&n);
    temp=n;
    if(n==0)
        zero=1;
    while(n>0)
    {
        rem=n%10;
        if(rem==0)
        {
            zero++;
        }
        else if(rem%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        n/=10;
    }
    printf("The Number of Even Digits= %d\n",even);
    printf("The Number of Odd Digits= %d\n",odd);
    printf("The Number of Zero Digits= %d\n",zero);
}
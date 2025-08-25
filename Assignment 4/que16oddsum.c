#include<stdio.h>
int main()
{
    int i,sum=0;
    for(i=101;i<=200;i+=2)
    {
        sum+=i;
    }
     printf("Sum of 100 to 200 Odd Numbers = %d",sum);
    return 0;
}
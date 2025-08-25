#include<stdio.h>
int main()
{
    int i,sum=0;
    for(i=1;i<=100;i+=2)
    {
        sum+=i;
    }
     printf("Sum of 1 to 100 Odd Numbers = %d",sum);
    return 0;
}
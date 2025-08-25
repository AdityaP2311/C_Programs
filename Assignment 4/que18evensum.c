#include<stdio.h>
int main()
{
    int x,y,i,sum=0;
    printf("Enter value of X: ");
    scanf("%d",&x);
    printf("Enter value of Y: ");
    scanf("%d",&y);
    for(i=x;i<=y;i++)
    {
        if(i%2==0)
        {
        sum+=i;
        }
    }
     printf("Sum of %d to %d  = %d",x,y,sum);
    return 0;
}
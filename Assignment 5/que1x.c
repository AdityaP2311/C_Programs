#include<stdio.h>
int main()
{
    int i,k,j,n;
    printf("Enter N: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(k=1;k<i;k++)
            printf(" ");
        for(j=1;j<=n-i+1;j++)
        {
        if(i==1||j==1|| j==n-i+1)
            printf("* ");
        else
            printf("  ");
        }
        printf("\n");
    }
}
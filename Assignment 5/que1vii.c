#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter N: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<=i)
                printf("%d",n-j+1);
            else
                printf("%d",n-i+1);
        }
        printf("\n");
    }
    return 0;
}
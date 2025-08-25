#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter Range: ");
    scanf("%d",&n);
    printf("Even Numbers From 1 to %d are : \n",n);
    for(i=2;i<=n;i=i+2)
    {
        printf("%d\n",i);
    }
    return 0;
}
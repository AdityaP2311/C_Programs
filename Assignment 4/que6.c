#include<stdio.h>
int main()
{
    int x,y,i;
    printf("Enter value of X: ");
    scanf("%d",&x);
    printf("Enter value of Y: ");
    scanf("%d",&y);
    for(i=x;i<=y;i++)
    {
        printf("%d\n",i);
    }
    return 0;
}
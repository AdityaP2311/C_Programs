#include<stdio.h>
int main()
{
    int x,y,i;
    printf("Enter value of X: ");
    scanf("%d",&x);
    printf("Enter value of Y: ");
    scanf("%d",&y);
    printf("Odd Numbers From %d to %d are : \n",x,y);
    for(i=x;i<=y;i++)
    {
        if(i&1)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
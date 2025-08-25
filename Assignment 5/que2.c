#include<stdio.h>
int main()
{
    int x,y,i,j;
    printf("Enter Start: ");
    scanf("%d",&x);
    printf("Enter End: ");
    scanf("%d",&y);

    for(i=1;i<=10;i++)
    {
        for(j=x;j<=y;j++)
            printf("%d X %d = %d\t",j,i,(j*i));

        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int x,y,z,ch;
    printf("1.Equality\n2.Less Than\n3.Quotient and Reminder\n4.Range\n5.Swap\nEnter a Choice: ");
    scanf("%d",&ch);
    if(ch<=5)
    printf("Enter Value of X and Y:");
    scanf("%d%d",&x,&y);

    if(ch==4)
    {
        printf("Enter Value of Z:");
        scanf("%d",&z);
    }
    switch(ch)
    {
        case 1: if(x==y)
                printf("%d is Equlas to %d",x,y);
                else
                printf("%d is not Equlas to %d",x,y);
                break;
        case 2: if(x<y)
                printf("%d is less than %d",x,y);
                else
                printf("%d is not less than %d",x,y);
                break;
        case 3: printf("Quotient=%d\n",(x/y));
                printf("Remainder=%d",(x%y));
                break;
        case 4: if(z>=x && z<=y)
                printf("%d lies between %d & %d",z,x,y);
                break;
        case 5: printf("Before Swapping\nX=%d\nY=%d\n",x,y);
                x=x+y;
                y=x-y;
                x=x-y;
                printf("After Swapping\nX=%d\nY=%d",x,y);
                break;
        default:printf("Invalid Choice");
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter x and y coordinate:- ");
    scanf("%d%d",&x,&y);

    if(x==0 && y==0)
        printf("Point lies at the Origin.\n");
    else if(x>0 && y>0)
        printf("Point lies in the Qudrant-I.\n");
    else if(x<0 && y>0)
        printf("Point lies in the Qudrant-II.\n");
    else if(x<0 && y<0)
        printf("Point lies in the Qudrant-III.\n");
    else if(x>0 && y<0)
        printf("Point lies in the Qudrant-IV.\n");
    else if(x==0)
        printf("Point lies on Y-axis.\n");
    else if(y==0)
        printf("Point lies on X-axis.\n");
    return 0;
}
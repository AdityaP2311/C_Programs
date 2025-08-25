#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of late days:- ");
    scanf("%d",&n);
    if(n<=5)
        printf("You got Rs.50 Fine...");
    else if(n<=10 && n>=6)
        printf("You got Rs.150 Fine...");
    else
       printf("You got Rs.200 Fine...");
}
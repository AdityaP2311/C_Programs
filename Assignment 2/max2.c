#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Any Three Numbers:-\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
        b=a;
    if(c>b)
        b=c;
    printf("%d is Greater ",b);
}
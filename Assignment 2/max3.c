#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Any Three Numbers:-\n");
    scanf("%d%d%d",&a,&b,&c);
    b=(a>b)?a:b;
    b=(c>b)?c:b;
    printf("%d is Maximum",b );
}
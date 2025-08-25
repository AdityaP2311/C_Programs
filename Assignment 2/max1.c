#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Any Three Numbers:-\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b && a>c)
        printf("%d is Greater",a);
    else if(b>c && b>a)
        printf("%d is Greater",b);
    else
        printf("%d is Greater",c);
    return 0;
}
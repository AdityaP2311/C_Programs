#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Any Three Numbers:- \n");
    scanf("%d%d%d",&a,&b,&c);
    if(b>a && b<c)
        printf("%d is between %d and %d\n",b,a,c);
    else
          printf("%d is not between %d and %d\n",b,a,c);
    return 0;
}
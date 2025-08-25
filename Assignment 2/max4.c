#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("Enter Any Three Numbers:-\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("Maximum is %.2f",fmax(a,fmax(b,c)));
}
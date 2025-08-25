#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
   if(n%2==0)
        printf("Even Number");
    else
        printf("Odd Number");
     /*
     printf("%s Number",(n%2==0)?"Even":"Odd");*/
     return 0;
}
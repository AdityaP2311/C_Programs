#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Two Numbers:-\n");
    scanf("%d%d",&a,&b);
    printf("Before Swapping: \nA =%d\nB =%d ",a,b);

    /* Using Temporary Variable
    c=a;
    a=b;
    b=c;  */

    /* Without Using Temporary Variable
     a=a+b-(b=a);*/

   /* a. Using + and – operator
    a=a+b;
    b=a-b;
    a=a-b; */
    
    b. Using / and * operator
    a=a*b;
    b=a/b;
    a=a/b; 
     
   
    printf("\n After Swapping: \nA =%d\nB =%d ",a,b);
    return 0;
}
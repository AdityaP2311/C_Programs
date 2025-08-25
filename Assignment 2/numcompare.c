#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter Any Two  Number:- \n");
    scanf("%d%d",&n1,&n2);
    
   if(n1==n2)
        printf("Both Numbers are equal");
   else if(n1>n2)
        printf("%d is Greater than %d\n",n1,n2);
    else 
        printf("%d is smaller than %d\n",n1,n2);
    return 0;
}
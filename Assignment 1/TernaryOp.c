// C Program to Check Number is Positive/Negative Using Ternary Operator(?:) 
#include <stdio.h>
/*
int main()
{
    int n;
    printf("Enter a Number:");
    scanf("%d", &n);
    (n>0)?printf("Positive Number"):printf("Negative Number");
    //printf("%s Number",(n>0)?"Positive":"Negative");
    return 0;
}
*/
// C Program to Check Number is Even/Odd Using Ternary Operator(?:) 

#include <stdio.h>

int main()
{
    int n;
    printf("Enter Any Number:");
    scanf("%d",&n);
   // printf("%s Number",(n&1)?"Odd":"Even");
    printf("%s Number",(n%2==0)?"Even":"Odd");
    return 0;
}

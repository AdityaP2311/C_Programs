#include<stdio.h>
int main()
{
    int num;
    printf("Enter a Number: ");
    scanf("%d",&num);
    /* By Using && Operator
    if(num%5==0 && num%7==0)
        printf("Number is Divisible by 5 & 7");
    else
        printf("Number is not Divisible by 5 & 7");
    
    */
    if(num%5==0)
    {
        if(num%7==0)
        {
            printf("Number is Divisible by both  5 and 7");
        }
        else
        {
            printf("Number is Divisible by 5 but not 7");
        }
    }
    else
        printf("Number is divisible by 7 but not 5");
      
    return 0;
}
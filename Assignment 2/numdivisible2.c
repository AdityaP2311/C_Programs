#include<stdio.h>
int main()
{
    int num;
    printf("Enter Any Number:- ");
    scanf("%d",&num);
    /* By Using && Operator
    if(num%5!=0 || num%7!=0)
        printf("Number not is Divisible  by 5 and 7");
    else
        printf("Number is Divisible by 5 and 7");
    */
    if(num%5==0 && num%7==0)
        printf("Number is Divisible by both 5 and 7");                                                                                                                                                                                                                                                                                                                              `
    else if(num%5==0)
        printf("Number is Divisible by 5 but not 7");
    else if(num%7==0)
        printf("Number is Divisible by 7 but not 5");
    else
        printf("Number is not Divisible by both 5 and 7");
    return 0;
}
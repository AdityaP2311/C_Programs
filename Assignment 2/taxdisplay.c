#include<stdio.h>
int main()
{
    float bs,tax;
    printf("Enter basic Salary: ");
    scanf("%f",&bs);
    
    if(bs>300000)
        tax=30;
    else if(bs <=300000 && bs>=150000)
        tax=20;
    else
        tax=0;
    printf("Total tax is %f",tax);
    return 0;
    
}
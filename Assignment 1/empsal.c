#include<stdio.h>
int main()
{
    int id;
    float da=30.0;
    float hra=10.0;
    float tax=5.0;
    float bs,ts;
    printf("Enter Id:-\n");
    scanf("%d",&id);
    printf("Enter basic Salary\n");
    scanf("%f",&bs);
    ts=bs+((bs*(da+hra-tax))/100);
    printf("Take home salary of Employee %f",ts);
    return 0;
}
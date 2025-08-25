#include<stdio.h>
int main()
{
    float a,b,am,hm;
    printf("Enter Two Numbers:- \n");
    scanf("%f%f",&a,&b);
    
    am=(a+b)/2;
    hm=a*b/(a+b);
    
    printf("AM: %f",am);
    printf("\nHM: %f",hm);
    return 0;
}
#include<stdio.h>
int main()
{
    double PI=3.14;
    double r,area,circum;
    printf("Enter Radius of Circle:- ");
    scanf("%lf",&r);
    
    area=PI*r*r;
    circum=2*PI*r;
    
    printf("Area of circle : %lf",area);
    printf("\nCircumference of circle : %lf",circum);
    return 0;   
}
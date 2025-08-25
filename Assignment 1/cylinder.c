#include<stdio.h>
int main()
{
    double PI=3.14;
    double r,h,sarea,volume;
    printf("Enter Radius of Cylinder:- ");
    scanf("%lf",&r);
    printf("Enter Height of Cylinder:- ");
    scanf("%lf",&h);

    sarea=(2*PI*r*r)+(2*PI*r*h);
    volume=PI*r*r*h;
    
    printf("Surface area of cylinder : %lf",sarea);
    printf("\nVolume of cylinder : %lf",volume);
    return 0;   
}
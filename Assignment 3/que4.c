#include<stdio.h>
int main()
{
    double PI=3.14;
    double r;
    int ch;
    printf("1.Area of Circle\n2.Circumference of Circle\n3.Volume of Sphere\nEnter Your Choice: ");
    scanf("%d",&ch);
    printf("Enter Radius: ");
    scanf("%lf",&r);
    switch(ch)
    {
        case 1: printf("Area of Circle =%.2lf",(PI*r*r));
                break;
        case 2: printf("Circumference of Circle =%.2lf",(2.0*PI*r));
                break;
        case 3: printf("Volume of Sphere =%.2lf",(PI*r*r*r*(4.0/3.0)));
                break;
        default:printf("Invalid Choice");
    }
    return 0;
}
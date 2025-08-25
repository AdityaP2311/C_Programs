#include<stdio.h>
int main()
{
    double l,b,h,sa,v;
    printf("Enter Length , Breadth and Height of a cuboid:- \n");
    scanf("%lf%lf%lf",&l,&b,&h);

    sa=2*(l*b+l*h+b*h);
    v=l*b*h;

    printf("Surface area of cuboid : %lf",sa);
    printf("\nVolume of a cuboid : %lf",v);
    return 0;
}
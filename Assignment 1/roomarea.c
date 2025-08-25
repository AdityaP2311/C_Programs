#include<stdio.h>
int main()
{
    float rl,rb,rh,rarea,roofarea;
    float wl,wb,warea;
    float dl,db,darea;
    float parea;

    printf("Enter Length, Breadth and Height of Room(in meters):-\n");
    scanf("%f%f%f",&rl,&rb,&rh);
    rarea=2*(rb+rl)*rh;

    printf("Enter Length and Width of Window(in meter):-\n");
    scanf("%f%f",&wl,&wb);
    warea=(wl*wb)*2;

    printf("Enter Length and Width of Door(in meter):-\n");
    scanf("%f%f",&dl,&db);
    darea=dl*db;

    parea=rarea-(darea+warea);
    roofarea=rb*rl;
    
    printf("\n Area of painted walls %.2fsq.ms",parea);
    printf("\n Area of whitewashed roof %.2fsq.ms",roofarea);
    return 0;


}
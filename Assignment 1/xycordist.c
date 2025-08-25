/*Q9.Accept the x and y coordinates of two points and compute the distance between 
the two points
*/
#include<stdio.h>
#include<math.h>
int main()
{
    float x1,x2,y1,y2,distance;
    printf("Enter x1 and y1:- \n");
    scanf("%f%f",&x1,&y1);
    printf("Enter x2 and y2:- \n");
    scanf("%f%f",&x2,&y2);
    
    distance=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    printf("Distance between two points= %f",distance);
    return 0;

}

// Q4.Accept the velocity,accelration and time.Print the final velocity and the distance travelled 

#include<stdio.h>
int main()
{
    float u,a,t,v,s;
    printf("Enter Initial Velocity");
    scanf("%f",&u);
    printf("Enter Acceleration");
    scanf("%f",&a);
    printf("Enter Time");
    scanf("%f",&t);

    v=u+a*t;
    s=u+a*t*t;
    
    printf("Final Velocity= %f",v);
    printf("\n Di= %f",s);
    return 0;


}

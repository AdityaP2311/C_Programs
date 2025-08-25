#include<stdio.h>
int main()
{
    float s1,s2,s3,total,avg;
    printf("Subject 1 Mark: ");
    scanf("%f",&s1);
    printf("\nSubject 2 Mark: ");
    scanf("%f",&s2);
    printf("\nSubject 3 Mark: ");
    scanf("%f",&s3);

    total=s1+s2+s3;
    avg=total/3;

    if(avg>=75)
        printf("Secured:- Class I");
    else if(avg<75 && avg>=60)
        printf("\n Secured:- Class II");
    else if(avg<60 && avg>=35)
        printf("\nSecured:- Class III");
    else
        printf("Fail");
    return 0;


}
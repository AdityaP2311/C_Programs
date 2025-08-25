#include<stdio.h>
int main()
{
    float a,b;
    char op;
    printf("Enter a Expression: ");
    scanf("%f%c%f",&a,&op,&b);

    switch(op)
    {
        case '+' :printf("%f %c %f = %f ",a,op,b,(a+b));
                  break;
        case '-' :printf("%f %c %f = %f ",a,op,b,(a-b));
                  break;
        case '*' :printf("%f %c %f = %f ",a,op,b,(a*b));
                  break;
        case '/' :printf("%f %c %f = %f ",a,op,b,(a/b));
                  break;
        default:printf("Invalid Operator");
    }
    return 0;
}
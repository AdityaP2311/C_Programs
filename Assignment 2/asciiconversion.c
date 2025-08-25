#include<stdio.h>
int main()
{
    char ch;
    printf("Enter Any character:- \n");
    scanf("%c",&ch);
    if(ch>=48 && ch<=58)
        printf("%c is a Digit.\n",ch);
    else if(ch>=65 && ch<=90)
        printf("%c is Uppercase alphabate.",ch);
    else if(ch>=97 && ch<=122)
        printf("%c is Lowercase alphabates.",ch);
    else
        printf("%c is not Digit or Letter.",ch);
    return 0;

}
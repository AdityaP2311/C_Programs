#include<stdio.h>
int main()
{
    char ch;
    printf("Enter Any Character:-\n");
    scanf("%c",&ch);
    
    printf(" The Previous character is %c",ch-1);
    printf("\n The next character is %c",ch+1);
   
    
    return 0;

}
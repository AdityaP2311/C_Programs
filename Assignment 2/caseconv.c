#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character:-\n");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
    {
        ch=ch-32;
        printf("Converted to Uppercase: %c",ch);
    }
    else if(ch>='A' && ch<='Z')
    {
        ch=ch+32;
         printf("Converted to Lowercase: %c",ch);
    }
    else
         printf("%c is not an Alphabate ",ch);
    return 0;
}
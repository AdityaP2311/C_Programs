#include<stdio.h>
int main()
{
    char ch;
    printf("Enter Any lowercase character(a-z):- \n");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
    {
    if(ch=='a' || ch=='e' || ch=='i'|| ch=='o' ||ch=='u')
        printf("It is Vowel.");
    else
        printf("It is Consonants");
    }
    else
    printf("Please enter lowercase alphabate(a-z)");
    return 0; 
}
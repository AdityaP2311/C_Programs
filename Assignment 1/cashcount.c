#include<stdio.h>
int main()
{
    int amt;
    int ten,five,one;
    printf("Enter Amount to Be Withdraw\n");
    scanf("%d",&amt);
    
    ten=amt/10;
    amt=amt%10;

    five=amt/5;
    amt=amt%5;

    one=amt;

    printf("Total 10Rs notes= %d",ten);
    printf("\nTotal 5Rs notes= %d",five);
    printf("\nTotal 1Rs notes= %d",one);

}
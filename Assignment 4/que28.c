#include<stdio.h>
int  main()
{
    int n,temp,rev=0;
    printf("Enter a Number: ");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Minus");
        n=-n;
    }
    if(n==0)
    {
        printf("Zero\n");
        return 0;
    }
    while(n>0)
    {
        rev=rev*10+n%10;
        n=n/10;
    }
    while(rev>0)
    {
        temp=rev%10;
        switch(temp)
        {
            case 0: printf("Zero");
                    break;        
            case 1: printf("One");
                    break;        
            case 2: printf("Two");
                    break;        
            case 3: printf("Three");
                    break;        
            case 4: printf("Four");
                    break;        
            case 5: printf("Five");
                    break;        
            case 6: printf("Six");
                    break;        
            case 7: printf("Seven");
                    break;        
            case 8: printf("Eight");
                    break;        
            case 9: printf("Nine");
                    break;        
        }
        rev=rev/10;
    }
    printf("\n");
    return 0;
}
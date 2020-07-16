#include<stdio.h>
main()
{
    int  i,n,r; //remainder= r
    printf("Enter the number to check Prime Or Not: ");
    scanf("%d",&n);
    for(i=n;i>1;i--)
    {
        r=n%i;
       
        
    }
       
        if(r==0 || n==1)
        {
            printf("Entered number is Not a Prime number\n");
        }
        else
        {
            printf("Entered number is Prime");
        }
        if(n==1)
        {
            printf("\n(Prime number is a positive integer that has exactly two positive divisors. However, 1 only has one positive divisor (1 itself), so it is not prime)");
        }
    
}
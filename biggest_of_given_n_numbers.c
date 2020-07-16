#include<stdio.h>
void main()
{
    int n1,n2,num[100],max;
    printf("How many numbers: ");
    scanf("%d",&n2);
    printf("\n\n");
    for(n1=0;n1<n2;n1++)
    {
        printf("Enter %dth number: ",n1+1);
        scanf("%d",&num[n1]);
    }
     max=num[0];
     for(n1=1;n1<n2;n1++)
     {
        if(num[n1]>max)
        {
            max=num[n1];
        }
     }
     printf("\n\n%d is the biggest number\n\n",max);
}
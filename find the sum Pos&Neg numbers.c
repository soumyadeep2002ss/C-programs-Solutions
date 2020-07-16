#include<stdio.h>
int main()
{
    int n1,n2,num[100];
    float psum,nsum,dif;
    printf("How many values: ");
    scanf("%d",&n2);
    printf("Enter all values followed by space in the list\n");
    psum=0;
    nsum=0;
    for(n1=0;n1<n2;n1++)
    {
        scanf("%d",&num[n1]);
    }
    for(n1=0;n1<n2;n1++)
    {
    if(num[n1]>0)
        {
        psum+=num[n1];
        }
        else
        {
            nsum+=num[n1];
        }
    }
    printf("Sum of positive values = %0.2f\n",psum);
    printf("Sum of megatives values = %0.2f\n\n",nsum);
    if(psum==fabs(nsum))
    {
        printf("Sum of Positive values & Sum of Negative values are same\n");
    }
    else if(psum>fabs(nsum))
    {
        printf("Positive Sum is greater in magnitude\n");
    }
    else
    {
        printf("Negative Sum is greater in magnitude\n"); 
    }
    printf("Difference in magnitude = %0.2f",dif=fabs(psum-fabs(nsum)));
}
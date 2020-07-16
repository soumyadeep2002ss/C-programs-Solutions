#include<stdio.h>
void main()
{
	int n;
	int c=0;
	printf("enter number:");
	scanf("%d",&n);
	do
	{
	   	n=n/10;
		c++;	
	}
	while(n!=0);
	printf("the digit is:%d",c);
}

#include<stdio.h>
void main()
{
	int n;
	int c=0;
	printf("enter number:");
	scanf("%d",&n);
	while(n!=0)
	{
		n=n/10;
		c++;
	}
	printf("the digit is:%d",c);
}

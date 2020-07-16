#include<stdio.h>
int main()
{
	int n,i,j;
	printf("\nenter the rows:");
	scanf("\n%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{
			printf("%c",j+64);
		}
		printf("\n");
	}
	return 0;
}

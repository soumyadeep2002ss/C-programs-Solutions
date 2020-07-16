#include<stdio.h>
main() 
{
int i,j,k=64,l,n;
printf("Enter the no of rows: ");
scanf("%d",&n);
n=n/2+1;
for(i=n;i>=1;i--)
{
	++k;
	for(j=1;j<=i;j++)
	{
		
	printf("   ");	
	}
	{
		for(l=n;l>=i;l--)
		printf("%c     ",k);
	}
	printf("\n");
		printf("\n");
}

for(i=n-1;i>=1;i--)
{
	--k;
		for(l=n;l>=i;l--)
		{
			printf("   ");
		}
		{
		for(j=1;j<=i;j++)
		{
		printf("%c     ",k);	
		}
		for(l=n;l>=i;l--)
		printf("      ");
		}
	printf("\n");
		printf("\n");
}
}

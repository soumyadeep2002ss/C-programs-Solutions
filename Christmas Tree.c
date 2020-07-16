#include<stdio.h>
main()
{
	int i,j,l,n,r,t;
	printf("Enter the size of the Christmas Tree(1-20 or above): ");
	scanf("%d",&n);
		for(i=n+9;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
		printf("  ");
		}
		for(l=n+9;l>=i;l--)
			{
				printf("* ");
			}
		for(j=n+9;j>=i+1;j--)
		{
		printf("* ");
		}
		printf("\n");
		
			for(j=1;j<=i;j++)
		{
		printf("  ");
		}
		for(l=n+9;l>=i;l--)
			{
				printf("* ");
			}
		for(j=n+9;j>=i+1;j--)
		{
		printf("* ");
		}
		printf("\n");
	}
	for(r=1;i<=n+9-3;i++)
	{
		for(r=1;r<=n+9-1;r++)
		{
			printf("  ");
		}
		for(t=1;t<=n+9+1;t++);
		{
			printf("* * * ");
		}
		printf("\n");
	}
	
		for(i=n+9-8;i>=1;i--)
	{
		for(j=1;j<=i+6;j++)
		{
		printf("  ");
		}
		for(l=n;l>=i;l--)
			{
				printf("* ");
			}
		for(j=n+9-3;j>=i+1;j--)
		{
		printf("* ");
		}
		printf("\n");
	}
	
	return 0;

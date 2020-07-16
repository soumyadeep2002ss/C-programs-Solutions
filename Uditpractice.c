#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Emter the numbers of rows: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+4;j++)
		{
			if(i==j || i>=j || i+j>n+4)
			printf("* ");
			else
			printf("  "); 
		}
		printf("\n");
   }
 return 0;
 }

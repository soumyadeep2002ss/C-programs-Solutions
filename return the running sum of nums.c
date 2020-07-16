#include<stdio.h>
main()
{
	int i,j,n,num1[50],sum;
	printf("Enter how many numbers: ");
	scanf("%d",&n);
	printf("Input: nums = ");

	for(i=0;i<n;i++)
	{
		scanf("%d",&num1[i]);
	}
	sum=0;
		for(j=0;j<n;j++)
		{
			
			sum=sum+num1[j];
			
		
			printf("%d ",sum);
		}
	
}

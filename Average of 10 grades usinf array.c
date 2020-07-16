#include<stdio.h>
int main()
{
	int grade[20],n,i;
	long sum=0;
	float average;
	printf("Enter the numbers of grades: ");
	scanf("%d",&n);
	printf("\n");
	for(i=1;i<=n;i++)
	{
		printf("%2u>",i);
		scanf("%d",&grade[i]);
		sum=sum+grade[i];
	}
	average=sum/n;
	printf("Averages of entered grade: %.2f",average);
	return 0;
}

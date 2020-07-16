#include<stdio.h>
#include<stdlib.h>
int main()	
{
	int choice,a,b,s;
	float c,v,x;
	while(1)
	{
	printf("\n1.Addition");
		printf("\n2.Substraction");
			printf("\n3.Dividsion");
				printf("\n4.Multiplication");
					printf("\n5.Odd-even");
						printf("\nEnter your choice: ");
							scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("\nEnter two number: ");
			scanf("%d %d",&a,&b);
			s=a+b;
			printf("Sum=%d",s);
			break;
		case 2:
			printf("\nEnter two number: ");
			scanf("%d %d",&a,&b);
			s=a-b;
			printf("%d",s);
			break;
		case 3:
			printf("\nEnter two number: ");
			scanf("%f %f",&v,&x);
			c=v/x;
			printf("%f",c);
			break;	
		case 4:
			printf("\nEnter two number: ");
			scanf("%d %d",&a,&b);
			s=a*b;
			printf("%d",s);
			break;	
		case 5:
			printf("\nEnter the number to check even or odd: ");
			scanf("%d",&a);
			b=(a%2);
			if(b==0)
			{
			printf("The number is even");
			}
			else
			printf("The number is odd");	
			break;
		default:
		printf("Invalid Input");
	}
	printf("\n");
}
return 0;
}

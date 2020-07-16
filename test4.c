#include<stdio.h>
int main()
{
	int x,y,z;
	printf("enter two values to check bigger");
	scanf("%d %d",&x,&y);
	z=x>y?x:y;
	printf("bigger value is =%d",z);
return 0; 
}

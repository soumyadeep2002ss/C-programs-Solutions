#include<stdio.h>
#include<math.h>
#define pi 3.14
#define max 180
void main()
{
	int angle;
	float x,y;
	printf("enter the angle");
	scanf("%d",&angle);
	if(angle>=0 && angle<=180)
	{
		x=(pi/max)*angle;
		y=cos(x);
		printf("the value of cos=%.2f",y);
	}
}

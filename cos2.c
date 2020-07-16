#include<stdio.h>
#include<math.h>
#define i sqrt(-1)
#define e 2.718
#define pi 3.14
void main()
{
	int x,y,angle;
	float b,c,a,ans;
	printf("enter the angle");
	scanf("%d",&angle);
	/*c=(pi/180)*angle;*/
    y=sin(c);
    b=y*i;
	a=i*angle;
	x=pow(e,a);
	ans=x-b;
	
	printf("the value of cos=%.2f",ans);
	
}

#include<stdio.h>
#include<math.h>
void area();
void main()
{
	area();
}

void area()
{
	float rad,area_circle;
	printf("Enter The radius of circle: ");
	scanf("%f",&rad);
	area_circle=M_PI*pow(rad,2);
	printf("Area of the circle is %f",area_circle);
}

#include<stdio.h>
void main()
{
	int y=5,x;
	x=++y + ++y + ++y + ++y + ++y + ++y + ++y + ++y + ++y;

	printf("%d %d",x  ,y);
}

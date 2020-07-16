#include<stdio.h>
void main()
{
int a,b,c,e;
printf("Enter the number to swap");
scanf("%d",&a);
b=a%10,c=(a%100)/10;e=(a/10)/10;
printf("The swaped number is= %d%d%d",b ,c ,e );
}

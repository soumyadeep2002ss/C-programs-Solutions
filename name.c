#include<stdio.h>
#include<string.h>
int main()
{
char Name[15];
printf("Enter your name");
scanf("%c",&Name);
if(strcmpi(Name,"Soumyadeep")==0)
 {
	printf("Welcome Sir");
 }
else
{
	printf("User not match");
}
return 0;
}

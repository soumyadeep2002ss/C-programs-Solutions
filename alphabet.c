#include<stdio.h>
int main()
{
	char ch;
	printf("enter the character:");
	scanf("%c",&ch);
	if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
	{
		printf("alphabet");
	}
	else
	{
		printf("not an alphabet");
	}
	return 0;
}

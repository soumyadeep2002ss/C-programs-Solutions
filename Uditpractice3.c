#include<stdio.h>
int main()
{
	int i,j;
	int ch=71,ch1=71;
	for(i=1;i<8;i++)
	{  
	    
		for(j=1;j<8;j++)
		{
			if(!(i+j>8))
			{
				printf("%c",ch);
				ch--;
			}
		}
	ch1=ch1-1;
	ch=ch1;
	printf("\n");
	}
    return 0;
}

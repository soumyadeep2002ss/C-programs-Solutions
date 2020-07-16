#include<stdio.h>
int main()
{
	int i,j,k,n=4,px,py;
	px=py=4;
	for(i=1;i<=4;i++) 
	 {  k=i;
	 	for(j=1;j<8;j++)
	 	{
	 		if(j>=px && j<=py)
            { 

               if(j==4)
               { 
               	 printf("%d",k);
               	 k--;
			    }
			     else
                 {
				 printf("%d",k);
			     k++; }			    							 	  
		    }	 		 
	 		else 
	 		printf(" ");
	 		
		 }
		 printf("\n");
		 px--;
		 py++;
	 }
 return 0;
 }

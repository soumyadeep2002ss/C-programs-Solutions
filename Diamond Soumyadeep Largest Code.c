#include<stdio.h>
main() 
{
int i,j,l,n,m,p,x;
printf("Enter the size of diamond: ");
scanf("%d",&n); 
if(n%2==0)
x=n;
else
{
	x=n+1;
}

//Upper Part//

printf("+");                              //For upper Border(like-   +-----+                )//
for(p=1;p<=2*n;p++)   
{
    printf("-");
}
printf("+");
printf("\n");
for(i=n-1;i>=1;i--)
{
    for(j=n;j<n+1;j++)                      //For Side(left) Boder(like-    |   
	{                                       //                              |
	printf("|");	                        //                              |               )//
	}
	for(j=1;j<=i;j++)
	{
	printf(" ");	                        //For Spacing
	}
	for(j=n;j<n+1;j++)
	{
	printf("/");	                        //For Border of Diamond(like-   /
    }                                       //                             /
                                            //                            /                 )//
x++;
	for(l=n+1;l-2>i;l--)                    //For inner element printing(Like-     -
        if(x%2==0)      //                                  					  ==
		printf("-");                        //                                   ---        )//
   	else
	   {
		   printf("=");
	   }
	       
	
	for(l=n;l-2>=i;l--)                     //For inner element printing(Like-     -
		  if(x%2==0)        //                                   				   ==                                  
		printf("-");                        //                                     ---      )//
    else
    {
        printf("=");
    }
    	
	for(j=n;j<n+1;j++)                      //For Border of Diamond(like-    \              //
	{                                       //                                \             //
	printf("\\");	                        //                                 \            )//
	}
    for(j=1;j<=i;j++)
	{
	printf(" ");	
	}
     for(j=n;j<n+1;j++)
	{
	printf("|");	
	}
	printf("\n");
}
for(m=1;m<=n;m++)
{
    printf("|<");                            //For middle Boundary(like-    <=========>     ) //
for(p=1;p<=n*2-2;p++)
{
    if(n%2==0)
    printf("-");
    else
    {
        printf("=");
    }
}
  printf(">|");
    break;
}
printf("\n");

//lower part//

for(i=n;i>=2;i--)
{
    for(j=n;j<n+1;j++)
	{
	printf("|");	
	}
    for(l=n;l>=i;l--)
	{
		printf(" ");
	}
	for(j=n;j<n+1;j++)
	{
	printf("\\");	
	}
	for(j=1;j<=i-2;j++)
	{
	 if(i%2==0)
		printf("=");
    else
    {
        printf("-");
    }	
	}
    for(j=1;j<=i-2;j++)
	{
     if(i%2==0)
		printf("=");
     else
    {
        printf("-");
    }	
	}
		for(j=n;j<n+1;j++)
	{
	printf("/");
    for(l=n;l>=i;l--)
		printf(" ");	
	}
    for(j=n;j<n+1;j++)
	{
	printf("|");	                             //For Side(Right) Boder(like-     |  
	}                                            //                                |
	printf("\n");                                //                                |                )//
}
printf("+");                                     //For Lower Border(like-   +-----+                 )//
for(p=1;p<=2*n;p++)
{
    printf("-");
}
printf("+");
return 0;
}                                           //Program By Soumyadeep Pal//
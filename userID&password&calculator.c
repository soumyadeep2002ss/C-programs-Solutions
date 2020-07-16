#include <stdio.h>
#include<string.h>
#include<stdlib.h>
void main() 
{
        int i=5;
        for(i;i>1;i--)
        {
        char ID[14] = "soumyadeep2002";
        int password = 24042002,pass;
        printf("\nPlese Enter Your ID:\n ");
        scanf("%s", & ID);
            pass=strcmp( ID,"soumyadeep2002");
            
        switch (pass) 
        {
            case 0 :
                printf("Enter your password:\n ");
                scanf("%d", & password);
                switch (password) 
                {
                    case 24042002:
                        printf("\nWelcome Mr. Soumyadeep\n");
                       
     {
	int choice,a,b,s;
	float c,v,x;
	while(1)
	{
	printf("\n1.Addition");
		printf("\n2.Substraction");
			printf("\n3.Dividsion");
				printf("\n4.Multiplication");
					printf("\n5.Odd-even");
                        printf("\n\n(To Close the programme enter 000)\n\n");
							printf("\nEnter your choice: ");
							scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("\nEnter two number: ");
			scanf("%d %d",&a,&b);
			s=a+b;
			printf("Sum=%d",s);
			break;
		case 2:
			printf("\nEnter two number: ");
			scanf("%d %d",&a,&b);
			s=a-b;
			printf("%d",s);
			break;
		case 3:
			printf("\nEnter two number: ");
			scanf("%f %f",&v,&x);
			c=v/x;
			printf("%f",c);
			break;	
		case 4:
			printf("\nEnter two number: ");
			scanf("%d %d",&a,&b);
			s=a*b;
			printf("%d",s);
			break;	
		case 5:
			printf("\nEnter the number to check even or odd: ");
			scanf("%d",&a);
			b=(a%2);
			if(b==0)
			{
			printf("The number is even");
			}
			else
			printf("The number is odd");	
			break;
        
		default:
		printf("Invalid Input");
	}
    if(choice==000)
     break;
	printf("\n");
}
     }
                        break;
                    default:
                        printf("incorrect password");
                        break;
                }
                break;
            default:
                printf("incorrect ID.....LOL.....");
                  printf("Try again You have %d trials left\n",i-2);
                break;
        }
        if(pass==0)
        break;
        }
}
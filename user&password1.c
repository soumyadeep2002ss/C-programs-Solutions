#include <stdio.h>
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
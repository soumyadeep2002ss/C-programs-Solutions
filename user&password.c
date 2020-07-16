#include <stdio.h>
void main() 
{
        int i=0;
        for(i;i<=1;i++)
        {
        char ID[14] = "soumyadeep2002";
        int password = 991551,pass;
        printf("Plese Enter Your ID:\n ");
        scanf("%s", & ID);
            pass=strcmp( ID,"soumyadeep2002");
            
        switch (pass) 
        {
            case 0 :
                printf("Enter your password:\n ");
                scanf("%d", & password);
                switch (password) 
                {
                    case 991551:
                        printf("Welcome sir Soumyadeep\n");
                        break;
                    default:
                        printf("incorrect password");
                        break;
                }
                break;
            default:
                printf("incorrect ID\n");
                break;
        }
        if(pass==0)
        break;
        }
}
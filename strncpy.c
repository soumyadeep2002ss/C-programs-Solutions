#include<stdio.h>
main()
{
   
    char name[20];
 
   
    strncpy(name,"soumya",2);
      
    name[2]='\0';
    printf("copied from 'soumya': %s\n\n ",&name);
   
}
#include<stdio.h>
main()
{
char name1[20];
char name2[20];
printf("Enter 1st word or text: ");
gets(name1);
printf("Enter 2nd word or text: ");
gets(name2);


strcat(name1,name2);
      
    
    printf("Merged string is: %s\n\n ",&name1);
   
}
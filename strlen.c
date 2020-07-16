#include<stdio.h>
main()
{
char name1[50];
int length;
printf("Enter word or text to calculate its length: ");
gets(name1);


length=strlen(name1);
      
    
    printf("word or text's length is : %d\n ",length);
   
}
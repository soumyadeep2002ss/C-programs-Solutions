#include<stdio.h>
main()
{
    int comp;
    char name[20],name1[20];
    printf("Enter 1st name: ");
    gets(name);
    printf("Enter 2nd name: ");
    gets(name1);
  comp=strcmp(name,name1);
  if(comp>0)
  printf("1st name is bigger in length than 2nd");
  else if(comp<0)
   printf("1st name is lesser in length than 2nd");
  else
   {
       printf("1st name is equal to 2nd name");
   }
   printf("%d",comp);

}
#include<stdio.h>
main()
{
    int i;
    for(i=0;i<100;i++)
    {
    char name[20];
    printf("Enter a word or text: ");
    gets(name);
    strrev(name);
    printf("Reverse of Entered word or texts: %s\n\n ",&name);
    }
}
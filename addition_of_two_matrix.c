#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3];
    int i,j,k,l;
    printf("(This program is for addition of two matrix)\n\n");
    printf("Enter the elements for 1st matrix\n\n");
    for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
     {
printf("Element-[%d][%d]: ",i+1,j+1);
scanf("%d",&a[i][j]);
     }
     }
printf("\n\nEntered matrix: ");
  for(i=0;i<3;i++)
     {
           printf("\n");
           for(j=0;j<3;j++)
           {
              
             printf("%d \t",a[i][j]);  
            
             
           }
           printf("\n\n");
     }

      printf("\nEnter the elements for 2nd matrix\n\n");
    for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
     {
printf("Element-[%d][%d]: ",i+1,j+1);
scanf("%d",&b[i][j]);
     }
     }

printf("\n\nEntered matrix: ");
      for(i=0;i<3;i++)
     {
           printf("\n");
           for(j=0;j<3;j++)
           {
              
             printf("%d \t",b[i][j]);  
            
             
           }
           printf("\n\n");
     }
   
   for(i=0;i<3;i++)
     {
          
           for(j=0;j<3;j++)
           {
              
           c[i][j]=a[i][j]+b[i][j];

           }
     }
     printf("Sum of this two matrices: \n"); 
     for(i=0;i<3;i++)
     {
           printf("\n");
           for(j=0;j<3;j++)
           {
              
             printf("%d \t",c[i][j]);  
            
             
           }
           printf("\n\n");
     }
   
    return 0;

}
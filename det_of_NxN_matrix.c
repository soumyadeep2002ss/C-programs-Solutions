#include<stdio.h>
int main()
{
    float matrix[6][6],det;
    int i,j,k;
    printf("Enter the matrix: (Row er element gulo opor theke niche por por likhe jabi)\n");
    for(i=0;i<6;i++)
    {
    for(j=0;j<6;j++)
    {
    scanf("%f",&matrix[i][j]);
    }
    }
    for(i=0;i<6;i++)
    {
    for(j=0;j<6;j++)
    {
    if(j>i)
    {
    for(k=0;k<6;k++)
    {
    matrix[j][k]-=(matrix[j][i]/matrix[i][i])* matrix[i][k];
    }
    }
    }
    }
    det=1;
    for(i=0;i<6;i++)
    det*=matrix[i][i];
    printf("The det of matrix is: %.2f\n",det);
    printf("hi plz hi kotha bolena hi");
    return 0;
}
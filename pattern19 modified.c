#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,left,up,start,n;
	int mat[20][20];
    start=1;
	printf("Enter the size of Chakravyuha: ");
	scanf("%d",&n);
    left=0;up=n-1;
	
	for(i=0;i<n;i++,left++,up--)
	{
		for(j=left;j<=up;j++,start++)
		{
			mat[left][j]=start;
		}
		for(j=left+1;j<=up;j++,start++)
		{
			mat[j][up]=start;
		}
		for(j=up-1;j>=left;j--,start++)
		{	
			mat[up][j]=start;
        }
        for(j=up-1;j>=left+1;j--,start++)
		{	
			mat[j][left]=start;
        }
    }

		for(i=0;i<n;i++)
		{
            printf("\n");
		for(j=0;j<n;j++)
		{
			printf("%-4d",mat[i][j]);
		}
		printf("\n");
		}
	// Soumyadeep
	}
	

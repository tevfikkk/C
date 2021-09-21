#include <stdio.h>

int main(void)
{
	int r,c ,a[100][100], b[100][100], sum[100][100], i, j;
	
	printf("Enter the number of rows that must be amidst 1 and 100: ");
	scanf(" %d",&r);
	printf("\n\nEnter the number of columns that must be amidst 1 and 100: ");
	scanf(" %d",&c);
	
	printf("\nEnter elements of first matrix: \n");
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("Enter element a%d%d\n",i+1,j+1);
			scanf(" %d", &a[i][j]);
		}
	}
	
	printf("\nEnter elements of second matrix: \n");
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("Enter element b%d%d\n");
			scanf(" %d", &b[i][j]);
		}
	}
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	
	printf("\nSum of two matrixs: \n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf(" %d", sum[i][j]);
			if(j == c-1)
			printf("\n\n");
		}
	}
	
	
	
	
	
	
	
	return 0;
}

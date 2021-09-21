#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 3
#define M 4

int main() {
	int arry[N][M];
	int i,j;
	int freq[7]={0}; //0 1 2 3 4 5 6
	int freq2D[N][M];
	
	srand(time(NULL));
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			arry[i][j]=rand()%6+1;
			printf("%d\t",arry[i][j]);
		}
		printf("\n");
	}	
	
	//Calculate freq.
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			freq[arry[i][j]]++;
		}
	}
	printf("\n");
	for(i=0;i<7;i++)
	{
		printf("freq[%d]= %d -",i,freq[i]);
	}
	printf("\n");printf("\n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			freq2D[i][j]=freq[arry[i][j]];
			printf("%d\t",freq2D[i][j]);
		}
		printf("\n");
	}
	

	return 0;
}

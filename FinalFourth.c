#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define t 5
#define k 6


int main(void)
{
	
	int arr[t][k]={{1,2,3,4,5},
				{6,7,8,9,10},
				{11,12,13,14,15},
				{16,17,18,19,20},
				{21,22,23,24,25}};

	randoml(arr);

	return 0;
}


int randoml(int arr[t][k])
{
	
	srand(time(NULL));
	
	
	int	x=rand()%5+1;
	int	y=rand()%5+1;
	int	sum;
	int	a=0;
	
    while(1)
    {
		if ((y - 1 >= 0 && y + 1 <= 4) && (x - 1 >= 0 && x + 1 <= 5))
		{
    		sum = arr[y][x - 1] + arr[y][x + 1] + arr[y - 1][x] + arr[y + 1][x];
    		a++;
		}
    	else 
		{
			x=rand() % 5 + 1;
			y=rand() % 5 + 1;
		}
		
		if (a=1)
		{
			break;
		}
	}
	
    printf("Vertical is: %d and Horizontol is: %d, So that Their sum is: %d \n",x,y,sum);

	return 0;
}

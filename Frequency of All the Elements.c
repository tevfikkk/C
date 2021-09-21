#include <stdio.h>
#include <stdlib.h>

// Tevfik Hacihamdioglu

void frequencyFunc(int arr[3][3]);

int main(void) // In this main function, I created an array and printed it as well as function.
{
	int arr[3][3]=
	{
		{1,4,5},
		{5,5,6},
		{1,1,6}
	};
	
	int i,j;
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	
	printf("\n \n");
	
	frequencyFunc(arr); // Function should be working out here.
	
	return 0;
}

void frequencyFunc(int arr[3][3])
{
	int i,j;
	int FreqArr[10][10];
	int Count;
	
	for (i = 0; i < 3; i++)
	{
    	scanf("%d", &arr[i]);
    	FreqArr[i] = -1;
   	}     
 
	for (i = 0; i < 3; i++)
	{
		Count = 1;
		for(j = i + 1; j < 3; j++)
		{
    		if(arr[i] == arr[j])
    		{
    			Count++;
    			FreqArr[j] = 0;
    		}
    	}
    	if(FreqArr[i] != 0)
    	{
    		FreqArr[i] = Count;
		}
	}

	printf("\n Frequency of All the Elements in this Array are : \n");
	for (i = 0; i < 3; i++)
	{
  		if(FreqArr[i] != 0)
  		{
  			printf("%d Occurs %d Times \n", arr[i], FreqArr[i]);
		}		
  	}

}

#include <stdio.h>

//Tevfik Hacihamdioglu

void arrayElementNShift(int arrayE[], int arraySize, int shiftCount);

int main(void)
{
	int arrayE[5]={3,4,5,6,7};
	int count;
	int i,arraySize=5;
	
	for(i=0;i<arraySize;i++)
	{
		printf("Originial one is : %d\n",arrayE[i]); // we have to use for loop to implement array
	}
	
	
	arrayElementNShift(arrayE,arraySize,count); // Using function
	
	
	return 0;
}


void arrayElementNShift(int arrayE[], int arraySize, int shiftCount)
{
	int i, temp;
	temp = arrayE[arraySize-1]; // calculate 
	
	for(i=arraySize-1; 0<i; i--)
	{
		arrayE[i]= arrayE[i-1]; // Shifting method is here to shift
		
		shiftCount++;
	}
	arrayE[0]=temp;
	
	printf("\nNew array is: \n");
	for(i=0; i<arraySize; i++)
	{
		printf(" %d", arrayE[i]);
	}
	char x;
	if(shiftCount < 0)  //Checking if it is left or right
	{
		x='-';
	}
	
	else if(shiftCount > 0)
	{
		x = '+';
	}
	printf("\nCount shift is %d and its move %c",shiftCount, x);
	
}

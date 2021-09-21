#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <String.h>

// Tevfik Hacihamdioglu

char* doubleArraySize(char *ptr,int arraySize);

int main(void)
{
	int i;
	char array[26]="abcdefghijklmnopqrstuvwxyz";
	char newabc[4];
	
	srand(time(NULL));
	
	char *ptr;
	
	ptr= array;
	
	for(i=0; i<4; i++)
	{
		ptr[i] = array[rand() % (sizeof(array)-1)];
		printf("%d. Value is %c\n",i+1,ptr[i]);
	}
	
	int *tmp = (int *)malloc(4*sizeof(int));
	
	for(i=0;i<4;i++)
	{
		tmp[i]=ptr[i];
		tmp[i] = array[rand() % (sizeof(array)-1)];
	}
	
	
	ptr=doubleArraySize(ptr,4);
	
	for(i=0;i<4*2;i++)
	{
		ptr[i] = array[rand() % (sizeof(array)-1)];
		printf("\n%d. Value is %c",i+1,ptr[i]);
	}
	
	printf("\n\n");

	
	return 0;
}

char* doubleArraySize(char *ptr,int arraySize)
{
	char *tmp;
	int i; //for loop control
	tmp=(char *)malloc(2*arraySize*sizeof(int));
	
	//Copy the contents of previous arrray
	for(i=0;i<arraySize;i++)
	{
		tmp[i]=ptr[i];
	}
	return tmp;
}

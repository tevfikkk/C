#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 7

int main(void)
{
	unsigned int frequency[SIZE] = {0};
	unsigned int roll;
	int face;
	
	srand(time(NULL));
	
	// roll die 60,000,000 times
	
	for(roll=1; roll <= 60000000; roll++)
	{
		face = rand()%6+1;
		frequency[face]++;

	}
	
	printf("%s \t%s\n", "Face", "Frequency");
	
	for (face=1; face < SIZE; face++)
	{
		printf("%d %d\n",face,frequency[face]);
	}
	
	
	
	return 0;
}



#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
	int i,j;
	int houses[50]; // houses
	int temp; // to change the values and swap
	
	int totalElectricity=200000;
	
	srand(time(NULL)); //to not get same random values
	
	for(i=0; i<50+1; ++i)
	{
		houses[i]=rand()%15000+4000; //getting random kWh to all houses.   //This show the a. part
		printf("%d. House can get %d kWh electricity.\n",i+1,houses[i]); //To show houses electricities
	}
	
	for(i=0; i<50; ++i)
	{
		for(j=0; j<50+1; ++j)
		{
			if(houses[j]>houses[i])
			{
				temp = houses[i];  				// What i was trying to do is order the houses first to one
				houses[i]=houses[j];			// 
				houses[j]=temp;
			}
		}	
	}
	
	for (i=1;i<51;i++)
	{

		if(totalElectricity-houses[i]>0)
		{
			printf ("%d. House can get electricity \n",i);
			totalElectricity=totalElectricity-houses[i];
		}
	}
	
	printf("The rest electricity in Total is that %d",totalElectricity);
	
	return 0;
}

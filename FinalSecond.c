#include <stdio.h>
#include <math.h>

int main(void)
{
	int truck;
	char days[7]={'monday', 'tuesday', 'wednesday', 'thursday', 'friday', 'saturday', 'sunday'};
	
	int passes;
	
	float money = 5000;
	
	float cost = (100*132)/7;
	
	printf("Total cost in 100 days for the company is: %.2f\n",cost);
	
	int i;
	for(i=0; i<7; ++i)
	{
		days[i];
	}
	
	printf("Learn how many passes will truck pay: \n");
	scanf(" %d", &passes);
	
	cost = ((132*passes)/7);

	printf("Cost is: %.2f",cost);
	
	money = 5000-cost;
	
	printf("Current money is %.2f",money);
	
	
	return 0;
}

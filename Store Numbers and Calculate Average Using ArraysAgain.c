#include <stdio.h>

int main(void)
{
	
	int i, n;
	float num[250], avg, sum=0;
	
	printf("Enter number of elements");
	scanf(" %d",&n);
	
	while( n > 100 || n < 1)
	{
		printf("Please enter a number again should be range of (1 to 100)");
		scanf(" %d",&n);
	}
	
	for(i=0; i < n; i++)
	{
		printf("%d. enter a number:", i+1);
		scanf(" %f", &num[i]);
		sum += num[i];
	}
	
	avg = sum/n;
	
	printf("Average is %f", avg);
	
	
	return 0;
}

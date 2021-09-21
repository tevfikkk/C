#include <stdio.h>

int main(void)
{
	int n,i;
	
	float num[100], sum = 0.0, avg;
	
	printf("Enter the numbers of elements");
	scanf(" %d",&n);
	
	
	while(n>100 || n<1)
	{
		printf("You should've inputted the number between 1 to 100\n");
		printf("Please enter again: \n");
		scanf(" %d", &n);
		
	}
	
	printf("Please enter the values that will be taken their average\n");
	
	for(i=0;i<n;++i)
	{
		scanf(" %f", &num[i]);
		sum += num[i];
	}
	
	avg = sum/n;
	
	printf("\n\nSum is: %.2f",sum);
	printf("\n\nAverage is: %.2f",avg);
	
	
	return 0;
}

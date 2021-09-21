#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, n;
	float arr[100];
	
	printf("Please enter elements amidst 1 to 100\n");
	scanf(" %d",&n);
	
	
	for(i=0; i<n; i++)
	{
		scanf(" %f",&arr[i]);
	}
	
	for(i=1; i<n; i++)
	{
		if(arr[0]<arr[i])
		{
			arr[0]=arr[i];
		}
	}
	
	printf("\nLargest element = %.2f",arr[0]);
	
	
	
	return 0;
}

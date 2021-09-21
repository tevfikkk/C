#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, i, *ptr, sum = 0;
	
	printf("Enter number of elements: ");
	scanf(" %d",&n);
	
	ptr = (int*) calloc(n,sizeof(int));
	
	if(ptr == NULL)
	{
		printf("Error! Memory not allocated");
		exit(0);
	}
	
	printf("Enter elements: ");
	for(i=0; i<n;i++)
	{
		scanf(" %d", ptr+i);
		sum += *(ptr+i);
	}
	
	printf("Sum = %d",sum);
	free(ptr);
	
	return 0;
}

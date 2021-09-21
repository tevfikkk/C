#include <stdio.h>

void swap(int* n1, int* n2);

int main(void)
{
	int num1=10, num2=5;
	
	printf("First number is %d\n Second number is %d\n",num1,num2);
	
	swap(&num1,&num2);
	
	printf("First number is %d\n Second number is %d\n",num1,num2);
	
	
	
	return 0;
}

void swap(int* n1, int* n2)
{
	int temp;
	
	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
	
	
}

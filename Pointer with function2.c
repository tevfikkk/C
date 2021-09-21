#include <stdio.h>

void addOne(int* a)
{
	(*a)++;
	
}

int main(void)
{
	int* p, i = 10;
	
	p = &i;
	
	addOne(p);
	
	printf("%d",*p);
	
	
	return 0;
}

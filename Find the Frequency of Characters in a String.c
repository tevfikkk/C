#include <stdio.h>

int main(void)
{
	char str[1000], ch;
	int count=0;
	
	printf("Enter a string: ");
	fgets(str,sizeof(str),stdin);
	
	printf("Enter a charachter to find its frequency: ");
	scanf(" %c", &ch);
	
	int i;
	
	for(i=0; str[i] != '\0'; i++)
	{
		if(ch == str[i])
		{
			++count;
		}
	}
	
	printf("Frequency of %c = %d", ch, count);
	
	return 0;
}

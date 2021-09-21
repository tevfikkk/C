#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[5][50], temp[50];
	printf("Enter 5 words: ");
	
	int i,j;
	for(i=0; i<5; i++)
	{
		fgets(str[i],sizeof(str[i]),stdin);
	}
	
	for(i=0; i < 5; i++)
	{
		for(j=i+1; j<5; j++)
		{
			if(strcmp(str[i],str[j]) > 0)
			{
				strcpy(temp,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],temp);
			}
		}
	}
	
	printf("\nIn the lexicographical order: \n");
	for(i=0; i<5;i++)
	{
		fputs(str[i],stdout);
	}
	
	
	return 0;
}


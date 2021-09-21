#include <stdio.h>
#include <stdlib.h>
#include <String.h>


int main()
{
	int i,j,selection,result;
	char english[6][25]={"car","cat","pencil","sky","grass","glass"};
	char turkish[6][25]={"araba","kedi","kalem","gokyuzu","cimen","bardak"};
	char ad2[25];
	
	
	printf("For english to turkish press 1, turkish to english press 2\n");
	scanf(" %d",&selection);
	
	if(selection == 1)
	{
		printf("You selected English to Turkish\n");
		printf("Input a word that you want to know!\n");
		scanf(" %s",&ad2);
		
		for(i=0; i<6; i++)
		{

		result = strcmp(ad2,english[i]);
		
		if(result == 0)
		{
			printf("Turkish version is that %s",turkish[i]);
		}
		
		}
	}
	
	else if(selection == 2)
	{
		printf("You selected Turkish to English\n");
		printf("Input a word that you want to translate!\n");
		scanf(" %s",&ad2);
		
		for(i=0; i<6; i++)
		{
		
		result = strcmp(ad2,turkish[i]);
		
		if (result == 0)
		{
			printf("English version is that %s",english[i]);
		}
		}
	}
	
	
	
	
	return 0;
}

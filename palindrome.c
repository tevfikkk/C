#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int ifPalindrome(char *str);

int main(void)
{
	char word[100];
	int result;
	
	printf("Please input a word that will be checked whether it's Palindrome or not\n");
	scanf("%s",&word);
	
	result = ifPalindrome(word);
	
	if(result == 1) 
    {
    	printf("%s is a palindrome. \n", word);
	}
	
	else
	{
		printf("%s is not a palindrome.  \n", word);
	}
	
	return 0;
}


int ifPalindrome(char *str)
{
	char *ptr1 = str;
    char *ptr2 = str + strlen(str) - 1;
    
    while (ptr2 > ptr1)
    {
        if (tolower(*ptr1) != tolower(*ptr2))
        {
            return 0;
        }
        
        ptr1++;

        ptr2--;
    }
    
    return 1;
    
}

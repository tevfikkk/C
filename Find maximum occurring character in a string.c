#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define str_size 300
#define chr_no 300

void main(void)
{
    char str[str_size];
    char str1[str_size];
	char y[str_size];
	int ch_fre[chr_no];
    int i = 0, max;
    int x;
    
    printf("Find maximum occurring character in a string\n");
    printf("Please Enter a sentence: ");
    fgets(str,str_size,stdin);


    for(i=0; i<chr_no; i++)
    {
        ch_fre[i] = 0;
    }

	i=0;
	
    while(str[i] != '\0')
    {
        x = (int)str[i];
        ch_fre[x] += 1;

        i++;
    }

    max = 0;
    for(i=0; i<chr_no; i++)
    {
        if( i != 32 )
        {
        	if(ch_fre[i] > ch_fre[max])
        	{
            	max = i;
            }
        }
    }	
    printf("%c is the Highest frequency of character that counts number of times : %d \n", max, ch_fre[max]);
	
	printf("\n");
	
	printf("Please Enter a sentence again:");
	
	fgets(str1,str_size,stdin);
	
	strcat(str,str1);
	
	printf("Combined version of all strings are: %s ", str);
	
    
    return 0;
}

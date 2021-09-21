#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int number, guess, x;
	srand(time(0));
	number = rand() % 47 + 36;
	x=0;
	
	while(x <= 5)
	{
		printf("guess the number i've just guessed between [37,83]\n");
		scanf("%d",&guess);
		if(guess == number)
		{
			printf("Congr. You knew! Number is %d\n",guess);
			
		}
		
		else if(guess < number && (guess >= 37 && guess <= 83))
		{
			printf("Your number is low\n");
		}
		else if(guess > number && (guess >= 37 && guess <= 83))
		{
			printf("Your number is high\n");
		}
		else if(guess < 37 || guess > 83)
		{
			printf("Your number is not in between that specific numbers!\n");
			printf("Program will be stopped!");
			break;
		}

		x+=1;
		
	}
	
	if(x > 5)
	{
		printf("You're out of guess, game is over! The number %d",number);
	}
	
	return 0;
}

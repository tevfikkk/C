#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BOARD_SIZE 20

//

int main(void)
{
	int p1Gm=5000;
	int p2Gm=5000; // money
	int x; // to calculate district number
	int d; // dice
	int s; // for switch case input
	int Board[BOARD_SIZE]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	
	srand(time(NULL));
	int i;
	
	for(i=0; i<BOARD_SIZE; i++)
	{
		Board[i];
		printf("%d ", Board[i]);
	}
	printf("\n");
	printf("Game board be now like that above\n");
	printf("\n");
	printf("Welcome to the Crocopoly!\nFirst player: 1, Second player: 2\n\n");
	
	while(p1Gm != 0 || p2Gm != 0) // If someone's cash is done, while loop is finished
	{
		printf("\n1-Show you current money\n2-Throw the dice\n");
		scanf(" %d",&s);
		
		switch(s)
		{
			case 1:printf("First player's money: %d - Second player's money: %d",p1Gm,p2Gm);
				break;
			
			case 2:printf("Let's throw the dice, which player be going to throw?\n Player1: x, Player2: y\n");
				char p;
				scanf(" %c",&p);
				if(p == 'x')
				{
					printf("First Player's Turn!\n");
					d = rand()%6+1;
					printf("Dice number is: %d\n",d);
					Board[d]=1;
					printf("Board be:\n");
					for(i=0; i<BOARD_SIZE; i++)
					{
						Board[i];   // To show BOARD
						printf("%d ", Board[i]);
					}
					printf("\n");
					
					x = d+1;
					printf("Now, first player is now on district %d \n",x);
					
					printf("Would you like to buy here? Price is 500! \nIf yes, input y, if no, input n !\n");
			
					char y;
					scanf(" %c",&y);
					
					if(y == 'Y' || y == 'y')
					{
						p1Gm-=500;
						printf("You've just now bought here! Rent cost is 250 for other player! \n");
						printf("Next turn for other player!\n");
					}
					
					else if(y == 'n' || y == 'N')
					{
						printf("Next turn for other player!\n");
					}
					
				}
				
				else if (p == 'y')
				{
					printf("Second Player's Turn!\n");
					d = rand()%6+1;
					printf("Dice number is: %d\n",d);
					Board[d]=2; // To indicate player's location
					printf("Board be:\n");
					for(i=0; i<BOARD_SIZE; i++)
					{
						Board[i];
						printf("%d ", Board[i]);
					}
					printf("\n");
					
					x = d+1;
					printf("Now, second player is now on district %d \n",x);
					
					printf("Would you like to buy here? Price is 500! \nIf yes, input y, if no, input n !\n");
			
					char y;
					scanf(" %c",&y);
					
					if(y == 'Y' || y == 'y')
					{
						p2Gm-=500; // To show updated money
						printf("You've just now bought here! Rent cost is 250 for other player! \n");
						printf("Next turn for other player!\n");
					}
					
					else if(y == 'n' || y == 'N')
					{
						printf("Next turn for other player!\n");
					}
					
				}
				
		}
		
		
		
	}
	
	if (p1Gm == 0)
	{
		printf("Second Player Has Won!\n"); // Game is finished when someone run out of cash
	}
	
	else if (p2Gm == 0)
	{
		printf("First Player Has Won!\n");	
	}	
	
	
	return 0;
}

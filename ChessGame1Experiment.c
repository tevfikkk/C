#include <stdio.h>
#include <stdlib.h>

// 

// I've tried to make this code a rather funny and extraordinary, hocam


int main(void)
{
	int i,j;
	int chessBoard[8][8]={
	{2, 3, 4, 6, 5, 4, 3, 2},
	{1, 1, 1, 1, 1, 1, 1, 1}, // Chess Board, row start with 8 and finishes with 1 by going up to down, column starts with a and finishes with h by going left to right.
	{0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0},
	{1, 1, 1, 1, 1, 1, 1, 1},
	{2, 3, 4, 5, 6, 4, 3, 2}
	};
	
	printf("Chess Board do now be like that\n");
	printf("King: 6, Queen: 5, Bishop: 4, Knight: 3, Rook: 2, Pawn: 1\n");
	printf("\n");
	
	for(i=0; i<8; i++)
	{
		for(j=0; j<8; j++) 
		{
			printf("%d ",chessBoard[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	printf("Your destiny says your purpose is to head to 4d by taking your legendry Knight! \n");
	printf("Available knights: 8b=A, 8g=B, 1b=C, 1g=D\n");
	printf("Which Knight would you like to start with?\n");
	char x;
	scanf(" %c", &x);
	
	
	if( x == 'A' || x == 'a')
	{
		printf("You have chosen your Knight called 8c!\n");
		printf("Know that Knight can only move like drawing L letter, so other expectations are not accepted!\n");
		
		printf("\n");
		
		char m;
		
		printf("Input M to move your Knight!\n");
		scanf(" %c",&m);
		if(m == 'M' || m == 'm')
		{
			chessBoard[2][2]=3;
			chessBoard[0][1]=0;
			for(i=0; i<8; i++)
			{
				for(j=0; j<8; j++)
				{
					printf("%d",chessBoard[i][j]);
				}
				printf("\n");
			}	
			printf("You're now in 6c location!\n");
				
			printf("\n\n");
			
			printf("Let's move to Final Destination with your blessed Knight!\n");
			printf("Input V to move your Knight!\n");
			char v;
			scanf(" %c",&v);
			
			if(v == 'V' || v == 'v')
			{
				chessBoard[4][3]=3;
				chessBoard[2][2]=0;
				for(i=0; i<8; i++)
				{
					for(j=0; j<8; j++)
					{
						printf("%d",chessBoard[i][j]);
					}
					printf("\n");
				}	
				printf("\n");
				printf("You're eventually in your destination with your honored Knight, Mission's been Carried Out!");
				
			}
			
			else
			{
				printf("Wrong Move!\n");
			}
			
			
			
		}
		
		else
		{
			printf("Wrong Move!\n");
		}
			
			
		
	}
	
	
	else if( x == 'B' || x == 'b')
	{
		printf("You have chosen your Knight called 8g!\n");
		printf("Know that Knight can only move like drawing L letter, so other expectations are not accepted!\n");
		
		printf("\n");
		
		char m;
		
		printf("Input M to move your Knight!\n");
		scanf(" %c",&m);
		if(m == 'M' || m == 'm')
		{
			chessBoard[2][7]=3;
			chessBoard[0][6]=0;
			for(i=0; i<8; i++)
			{
				for(j=0; j<8; j++)
				{
					printf("%d",chessBoard[i][j]);
				}
				printf("\n");
			}	
			printf("You're now in 6h location!\n");
				
			printf("\n\n");
			
			printf("Now head to next destination with your blessed Knight!\n");
			printf("Input V to move your Knight!\n");
			char v;
			scanf(" %c",&v);
			
			if(v == 'V' || v == 'v')
			{
				chessBoard[3][5]=3;
				chessBoard[2][7]=0;
				for(i=0; i<8; i++)
				{
					for(j=0; j<8; j++)
					{
						printf("%d",chessBoard[i][j]);
					}
					printf("\n");
				}
				printf("You're now in 5f");
				printf("\n");
				printf("Let's move to Final Destination with your blessed Knight!\n");
				printf("Input N to move your Knight!\n");
				char n;
				scanf(" %c",&n);
				
				if(n == 'N' || n == 'n')
				{
					chessBoard[4][3]=3;
					chessBoard[3][5]=0;
					for(i=0; i<8; i++)
				{
					for(j=0; j<8; j++)
					{
						printf("%d",chessBoard[i][j]);
					}
					printf("\n");
					
					
				}
				
				printf("You're eventually in your destination with your honored Knight, Mission's been Carried Out!\n");
	
				}
				
				else
				{
					printf("Wrong Move!\n");
				}
					
			}
			
			else
			{
				printf("Wrong Move!\n");
			}
			
			
			
		}
		
		else
		{
			printf("Wrong Move!\n");
		}
		
	}
	
	else if( x == 'C' || x == 'c')
	{
		printf("You have chosen your Knight called 1b!\n");
		printf("Know that Knight can only move like drawing L letter, so other expectations are not accepted!\n");
		
		printf("\n");
		
		char m;
		
		printf("Input M to move your Knight!\n");
		scanf(" %c",&m);
		if(m == 'M' || m == 'm')
		{
			chessBoard[5][0]=3;
			chessBoard[7][1]=0;
			for(i=0; i<8; i++)
			{
				for(j=0; j<8; j++)
				{
					printf("%d",chessBoard[i][j]);
				}
				printf("\n");
			}	
			printf("You're now in 3b location!\n");
				
			printf("\n\n");
			
			printf("Now head to next destination with your blessed Knight!\n");
			printf("Input V to move your Knight!\n");
			char v;
			scanf(" %c",&v);
			
			if(v == 'V' || v == 'v')
			{
				chessBoard[3][1]=3;
				chessBoard[5][0]=0;
				for(i=0; i<8; i++)
				{
					for(j=0; j<8; j++)
					{
						printf("%d",chessBoard[i][j]);
					}
					printf("\n");
				}	
				
				printf("Let's move to Final Destination with your blessed Knight!\n");
				printf("Input N to move your Knight!\n");
				char n;
				scanf(" %c",&n);
				
				if(n == 'N' || n == 'n')
				{
					chessBoard[4][3]=3;
					chessBoard[3][1]=0;
					for(i=0; i<8; i++)
				{
					for(j=0; j<8; j++)
					{
						printf("%d",chessBoard[i][j]);
					}
					printf("\n");
					
					
				}
				printf("\n");
				
				printf("You're eventually in your destination with your honored Knight, Mission's been Carried Out!\n");
	
				}
				
				else
				{
					printf("Wrong Move!\n");
				}
			}
			
			
			else
			{
				printf("Wrong Move!\n");
			}
			

			
		}
		
		else
		{
			printf("Wrong Move!\n");
		}
	}
	
	else if( x == 'D' || x == 'd')
	{
		printf("You have chosen your Knight called 1g!\n");
		printf("Know that Knight can only move like drawing L letter, so other expectations are not accepted!\n");
		
		printf("\n");
		
		char m;
		
		printf("Input M to move your Knight!\n");
		scanf(" %c",&m);
		if(m == 'M' || m == 'm')
		{
			chessBoard[5][5]=3;
			chessBoard[7][6]=0;
			for(i=0; i<8; i++)
			{
				for(j=0; j<8; j++)
				{
					printf("%d",chessBoard[i][j]);
				}
				printf("\n");
			}	
			printf("You're now in 3f location!\n");
				
			printf("\n\n");
			
			printf("Let's move to Final Destination with your blessed Knight!\n");
			printf("Input V to move your Knight!\n");
			char v;
			scanf(" %c",&v);
			
			if(v == 'V' || v == 'v')
			{
				chessBoard[4][3]=3;
				chessBoard[5][5]=0;
				for(i=0; i<8; i++)
				{
					for(j=0; j<8; j++)
					{
						printf("%d",chessBoard[i][j]);
					}
					printf("\n");
				}
				
				printf("You're eventually in your destination with your honored Knight, Mission's been Carried Out!\n");
				
				printf("\n\n");
			
			}
			
			else
			{
				printf("Wrong Move!\n");
			}
		}
	
	else
	{
		printf("Invalid input, All Knight's soul will be rising to heaven, cya!");
	}

	return 0;
}
}

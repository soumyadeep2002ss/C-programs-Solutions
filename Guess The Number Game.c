#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
		int randomNumber=0;
		int guess=0;
		int NumberOfGuesses=5;
		time_t t;
		
		srand((unsigned) time(&t));
		randomNumber=rand() % 21;
		printf("\nThis is a guessing game.");
		printf("\nI have choosen a number between 0 and 20,which you must guess. \n");
		for(NumberOfGuesses=5;NumberOfGuesses>0;--NumberOfGuesses)
		{
			printf("\nYou have %d tr%s left.",NumberOfGuesses,NumberOfGuesses == 1 ? "y":"ies");
			printf("\nEnter a guess: ");
			scanf("%d",&guess);
			if(guess==randomNumber)
			{
				printf("\nCongratulations. You guessed it!\n");
				break;
			}
			else if(guess<0 || guess>20)
			printf("I said the number is between 0 and 20. \n");
			else if(randomNumber>guess)
			printf("Sorry, %d is wrong. My number is greater than that.\n",guess);
			else if(randomNumber<guess)
			printf("Sorry, %d is wrong. My number is less than that.\n",guess);
		}
		printf("\nYou have had five tries and failed.The number was %d\n",randomNumber);
return 0;	
}
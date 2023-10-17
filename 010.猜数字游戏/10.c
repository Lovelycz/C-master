#include <stdio.h>
#include <conio.h>

int main()
{
	int Password = 0, Number = 0, price = 58, i = 0;
	//Clear screen 
	system("cls");
	printf("*******This is a Number Guess Game!*****\n");
	
	while(Password != 1234)
	{
		if( i >= 3)
		return;
		i++;
		puts("Please input a Password:");
		scanf("%d",&Password);
	}
	while(Number != price)
	{
		do{
			puts("Please input a number between 1 and 100: \n");
			scanf("%d",&Number);
			//printf("Your input Number is %d\n",Number);
		} while(Number < 1 || Number > 100);

		if (Number >= 90)
		{
			printf("Too Bigger! Press any key to try again!\n");
		}else if (Number >= 70)
		{
			printf("Bigger!\n");
		}else if (Number <= 30)
		{
			printf("Too Small! Press any key to try again!\n");
		}else if (Number <= 50)
		{
			printf("Small! Press any key to try again!\n");
		}else
		{
			if (Number == price)
			{
				printf("OK! You are right! Good Job!\n");
			}
			else if (Number < price)
			{
				printf("Sorry, Only a little smaller! Press any key to try again! \n");
			}
			else
			{
				printf("Sorry, Only a little bigger! Press any key to try again!\n");
			}
		}
	}
	return 0;
}

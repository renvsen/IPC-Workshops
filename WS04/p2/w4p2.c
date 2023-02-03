/*
*****************************************************************************
                          Workshop - #4 (P2)
Full Name  :    Rendell Velasco
Student ID#:    140014218
Email      :    rvelasco6@myseneca.ca
Section    :    NDD

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	//Looping flags
	int shoppingFlag = 1;
	
	//needed and picked

	while (shoppingFlag)
	{
		//looping flags
		int applesFlag, pickedApplesFlag, orangesFlag, pickedOrangesFlag, pearsFlag, pickedPearsFlag, tomatoesFlag, pickedTomatoesFlag, cabbagesFlag, pickCabbagesFlag;
		applesFlag = orangesFlag = pearsFlag = tomatoesFlag = cabbagesFlag = 1;
		
		//needed and picked apples
		int neededApples, pickedApples, neededOranges, pickedOranges, neededPears, pickedPears, neededTomatoes, pickedTomatoes, neededCabbages, pickedCabbages;

		printf("Grocery Shopping\n");
		printf("================");

		while (applesFlag)
		{
			printf("\nHow many APPLES do you need? : ");
			scanf("%d", &neededApples);
			if (neededApples < 0)
			{
				printf("ERROR: Value must be 0 or more.");
			}
			else if (neededApples > 0 || neededApples == 0)
			{
				applesFlag = 0;
			}
		}

		while (orangesFlag)
		{
			printf("\nHow many ORANGES do you need? : ");
			scanf("%d", &neededOranges);
			if (neededOranges < 0)
			{
				printf("ERROR: Value must be 0 or more.");
			}
			else if (neededOranges > 0 || neededOranges == 0)
			{
				orangesFlag = 0;
			}
		}

		while (pearsFlag)
		{
			printf("\nHow many PEARS do you need? : ");
			scanf("%d", &neededPears);
			if (neededPears < 0)
			{
				printf("ERROR: Value must be 0 or more.");
			}
			else if (neededPears > 0 || neededPears == 0)
			{
				pearsFlag = 0;
			}
		}

		while (tomatoesFlag)
		{
			printf("\nHow many TOMATOES do you need? : ");
			scanf("%d", &neededTomatoes);
			if (neededTomatoes < 0)
			{
				printf("ERROR: Value must be 0 or more.");
			}
			else if (neededTomatoes > 0 || neededTomatoes == 0)
			{
				tomatoesFlag = 0;
			}
		}

		while (cabbagesFlag)
		{
			printf("\nHow many CABBAGES do you need? : ");
			scanf("%d", &neededCabbages);
			if (neededCabbages < 0)
			{
				printf("ERROR: Value must be 0 or more.");
			}
			else if (neededCabbages > 0 || neededCabbages == 0)
			{
				cabbagesFlag= 0;
			}
		}

		printf("\n--------------------------\n");
		printf("Time to pick the products!\n");
		printf("--------------------------\n");

		pickedApplesFlag = (neededApples > 0) ? 1 : 0;

		while (pickedApplesFlag)
		{
			printf("\nPick some APPLES... how many did you pick? : ");
			scanf("%d", &pickedApples);
			if (pickedApples <= 0)
			{
				printf("ERROR: You must pick at least 1!");
			}
			else if (pickedApples > neededApples)
			{
				printf("You picked too many... only %d more APPLE(S) are needed.", neededApples);
			}
			else if (pickedApples <= neededApples && neededApples > 0)
			{
				neededApples -= pickedApples;

				if (neededApples > 0)
				{
					printf("Looks like we still need some APPLES...");
				}
			}
			if (neededApples == 0)
			{
				pickedApplesFlag = 0;
				printf("Great, that's the apples done!");
			}
		}

		pickedOrangesFlag = (neededOranges > 0) ? 1 : 0;

		while (pickedOrangesFlag)
		{
			printf("\nPick some APPLES... how many did you pick? : ");
			scanf("%d", &pickedOranges);
			if (pickedOranges <= 0)
			{
				printf("ERROR: You must pick at least 1!");
			}
			else if (pickedOranges > neededOranges)
			{
				printf("You picked too many... only %d more APPLE(S) are needed.", neededOranges);
			}
			else if (pickedOranges <= neededOranges && neededOranges > 0)
			{
				neededOranges -= pickedOranges;

				if (neededOranges > 0)
				{
					printf("Looks like we still need some APPLES...");
				}
			}
			if (neededOranges == 0)
			{
				pickedOrangesFlag = 0;
				printf("Great, that's the apples done!");
			}
		}

		printf("\n\nAll the items are picked!\n");
		printf("\nDo another shopping? (0=NO): ");
		scanf("%d", &shoppingFlag);
		printf("\n");

	}

	printf("\nYour tasks are done for today - enjoy your free time!\n");

	return 0;
}
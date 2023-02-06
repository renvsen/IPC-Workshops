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
	
	while (shoppingFlag)
	{
		//looping flags
		int applesFlag, pickedApplesFlag, orangesFlag, pickedOrangesFlag, pearsFlag;
		int pickedPearsFlag, tomatoesFlag, pickedTomatoesFlag, cabbagesFlag, pickedCabbagesFlag;
		int neededProducts;
		neededProducts = applesFlag = orangesFlag = pearsFlag = tomatoesFlag = cabbagesFlag = 1;
		
		//needed and picked apples
		int neededApples, neededOranges, neededPears, neededTomatoes, neededCabbages;
		int pickedApples, pickedOranges, pickedPears, pickedTomatoes, pickedCabbages;
		neededApples = neededOranges = neededPears = neededTomatoes = neededCabbages = 0;
		pickedApples = pickedOranges = pickedPears = pickedTomatoes = pickedCabbages = 0;

		printf("Grocery Shopping\n");
		printf("================");

		while (neededProducts)
		{
			if (applesFlag)
			{
				printf("\nHow many APPLES do you need? : ");
				scanf("%d", &neededApples);
				applesFlag = (neededApples > 0 || neededApples == 0) ? 0 : 1;
			}
			else if (applesFlag == 0 && orangesFlag)
			{
				printf("\nHow many ORANGES do you need? : ");
				scanf("%d", &neededOranges);
				orangesFlag = (neededOranges > 0 || neededOranges == 0) ? 0 : 1;

			}
			else if (applesFlag == 0 && orangesFlag == 0 && pearsFlag)
			{
				printf("\nHow many PEARS do you need? : ");
				scanf("%d", &neededPears);
				pearsFlag = (neededPears > 0 || neededPears == 0) ? 0 : 1;
			}
			else if (applesFlag == 0 && orangesFlag == 0 && pearsFlag == 0 && tomatoesFlag)
			{
				printf("\nHow many TOMATOES do you need? : ");
				scanf("%d", &neededTomatoes);
				tomatoesFlag = (neededTomatoes > 0 || neededTomatoes == 0) ? 0 : 1;
			}
			else if (applesFlag == 0 && orangesFlag == 0 && pearsFlag == 0 && tomatoesFlag == 0 && cabbagesFlag)
			{
				printf("\nHow many CABBAGES do you need? : ");
				scanf("%d", &neededCabbages);
				cabbagesFlag = (neededCabbages > 0 || neededCabbages == 0) ? 0 : 1;
			}

			if (neededApples < 0 || neededOranges < 0 || neededPears < 0 || neededTomatoes < 0 || neededCabbages < 0)
			{
				printf("ERROR: Value must be 0 or more.");
			}

			neededProducts = (applesFlag == 0 && orangesFlag == 0 && pearsFlag == 0 && tomatoesFlag == 0 && cabbagesFlag == 0) ? 0: 1;
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
				printf("Great, that's the apples done!\n");
			}
		}

		pickedOrangesFlag = (neededOranges > 0) ? 1 : 0;

		while (pickedOrangesFlag)
		{
			printf("\nPick some ORANGES... how many did you pick? : ");
			scanf("%d", &pickedOranges);
			if (pickedOranges <= 0)
			{
				printf("ERROR: You must pick at least 1!");
			}
			else if (pickedOranges > neededOranges)
			{
				printf("You picked too many... only %d more ORANGE(S) are needed.", neededOranges);
			}
			else if (pickedOranges <= neededOranges && neededOranges > 0)
			{
				neededOranges -= pickedOranges;

				if (neededOranges > 0)
				{
					printf("Looks like we still need some ORANGES...");
				}
			}
			if (neededOranges == 0)
			{
				pickedOrangesFlag = 0;
				printf("Great, that's the oranges done!\n");
			}
		}

		pickedPearsFlag = (neededPears > 0) ? 1 : 0;

		while (pickedPearsFlag)
		{
			printf("\nPick some PEARS... how many did you pick? : ");
			scanf("%d", &pickedPears);
			if (pickedPears <= 0)
			{
				printf("ERROR: You must pick at least 1!");
			}
			else if (pickedPears > neededPears)
			{
				printf("You picked too many... only %d more PEAR(S) are needed.", neededPears);
			}
			else if (pickedPears <= neededPears && neededPears > 0)
			{
				neededPears -= pickedPears;

				if (neededPears > 0)
				{
					printf("Looks like we still need some PEARS...");
				}
			}
			if (neededPears == 0)
			{
				pickedPearsFlag = 0;
				printf("Great, that's the pears done!\n");
			}
		}
		pickedTomatoesFlag = (neededTomatoes > 0) ? 1 : 0;

		while (pickedTomatoesFlag)
		{
			printf("\nPick some TOMATOES... how many did you pick? : ");
			scanf("%d", &pickedTomatoes);
			if (pickedTomatoes <= 0)
			{
				printf("ERROR: You must pick at least 1!");
			}
			else if (pickedTomatoes > neededTomatoes)
			{
				printf("You picked too many... only %d more TOMATO(ES) are needed.", neededTomatoes);
			}
			else if (pickedTomatoes <= neededTomatoes && neededTomatoes > 0)
			{
				neededTomatoes -= pickedTomatoes;

				if (neededTomatoes > 0)
				{
					printf("Looks like we still need some TOMATOES...");
				}
			}
			if (neededTomatoes == 0)
			{
				pickedTomatoesFlag = 0;
				printf("Great, that's the tomatoes done!\n");
			}
		}

		pickedCabbagesFlag = (neededCabbages > 0) ? 1 : 0;

		while (pickedCabbagesFlag)
		{
			printf("\nPick some CABBAGES... how many did you pick? : ");
			scanf("%d", &pickedCabbages);
			if (pickedCabbages <= 0)
			{
				printf("ERROR: You must pick at least 1!");
			}
			else if (pickedCabbages > neededCabbages)
			{
				printf("You picked too many... only %d more CABBAGE(S) are needed.", neededCabbages);
			}
			else if (pickedCabbages <= neededCabbages && neededCabbages > 0)
			{
				neededCabbages -= pickedCabbages;

				if (neededCabbages > 0)
				{
					printf("Looks like we still need some CABBAGES...");
				}
			}
			if (neededCabbages == 0)
			{
				pickedCabbagesFlag = 0;
				printf("Great, that's the cabbages done!\n");
			}
		}

		printf("\nAll the items are picked!\n");
		printf("\nDo another shopping? (0=NO): ");
		scanf("%d", &shoppingFlag);
		printf("\n");

	}

	printf("Your tasks are done for today - enjoy your free time!\n");

	return 0;
}

/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #7 (P2)
Full Name  :    Rendell Velasco
Student ID#:    140014218
Email      :    rvelasco6@myseneca.ca
Section    :    NDD

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define MIN_PATH_LENGTH 10
#define MAX_PATH_LENGTH 70
#define PATH_MULTIPLE 5
#define MAX_LIVES 10

struct PlayerInfo
{
    int nOfLives;
    char symbol;
    int treasuresFound;
    int moves[MAX_PATH_LENGTH];
    int move;
};

struct GameInfo
{
    int maxMoves;
    int pathLength;
    int bombs[MAX_PATH_LENGTH];
    int treasures[MAX_PATH_LENGTH];
};

int main(void)
{
    struct PlayerInfo playerInfo = { 0, ' ', 0, {0}, 0 };
    struct GameInfo gameInfo = { 0, 0, {0}, {0} };
    int i, j, posn;

    printf("================================\n");
    printf("         Treasure Hunt!\n");
    printf("================================\n");
    printf("\nPLAYER Configuration\n");
    printf("--------------------\n");
    printf("Enter a single character to represent the player: ");
    scanf(" %c", &playerInfo.symbol);

    do
    {
        printf("Set the number of lives: ");
        scanf("%d", &playerInfo.nOfLives);

        if (playerInfo.nOfLives < 1 || playerInfo.nOfLives > MAX_LIVES)
        {
            printf("     Must be between 1 and %d!\n", MAX_LIVES);
        }

    } while (playerInfo.nOfLives < 1 || playerInfo.nOfLives > MAX_LIVES);

    printf("Player configuration set-up is complete\n");
    printf("\nGAME Configuration\n");
    printf("------------------\n");

    do
    {
        printf("Set the path length (a multiple of %d between %d-%d): ", PATH_MULTIPLE, MIN_PATH_LENGTH, MAX_PATH_LENGTH);
        scanf("%d", &gameInfo.pathLength);

        if ((gameInfo.pathLength % 5) != 0 || gameInfo.pathLength < MIN_PATH_LENGTH || gameInfo.pathLength > MAX_PATH_LENGTH)
        {
            printf("     Must be a multiple of %d and between %d-%d!!!\n", PATH_MULTIPLE, MIN_PATH_LENGTH, MAX_PATH_LENGTH);
        }

    } while ((gameInfo.pathLength % 5) != 0 || gameInfo.pathLength < MIN_PATH_LENGTH || gameInfo.pathLength > MAX_PATH_LENGTH);

    do
    {
        printf("Set the limit for number of moves allowed: ");
        scanf("%d", &gameInfo.maxMoves);

        if (gameInfo.maxMoves < playerInfo.nOfLives || gameInfo.maxMoves >(0.75 * gameInfo.pathLength))
        {
            printf("    Value must be between %d and %d\n", playerInfo.nOfLives, (int)(0.75 * gameInfo.pathLength));
        }

    } while (gameInfo.maxMoves < playerInfo.nOfLives || gameInfo.maxMoves >(0.75 * gameInfo.pathLength));

    printf("\nBOMB Placement\n");
    printf("--------------\n");
    printf("Enter the bomb positions in sets of %d where a value\n", PATH_MULTIPLE);
    printf("of 1=BOMB, and 0=NO BOMB. Space-delimit your input.\n");
    printf("(Example: 1 0 0 1 1) NOTE: there are %d to set!\n", gameInfo.pathLength);

    for (posn = 0, j = 0; j < gameInfo.pathLength; j += PATH_MULTIPLE)
    {
        printf("   Positions [%2d-%2d]: ", j + 1, j + 5);

        for (i = 0; i < PATH_MULTIPLE; i++, posn++)
        {
            scanf("%d", &gameInfo.bombs[posn]);
        }
    }

    printf("BOMB placement set\n");
    printf("\nTREASURE Placement\n");
    printf("------------------\n");
    printf("Enter the treasure placements in sets of %d where a value\n", PATH_MULTIPLE);
    printf("of 1=TREASURE, and 0=NO TREASURE. Space-delimit your input.\n");
    printf("(Example: 1 0 0 1 1) NOTE: there are %d to set!\n", gameInfo.pathLength);

    for (posn = 0, j = 0; j < gameInfo.pathLength; j += PATH_MULTIPLE)
    {
        printf("   Positions [%2d-%2d]: ", j + 1, j + 5);

        for (i = 0; i < PATH_MULTIPLE; i++, posn++)
        {
            scanf("%d", &gameInfo.treasures[posn]);
        }
    }

    printf("TREASURE placement set\n");
    printf("\nGAME configuration set-up is complete...\n");
    printf("\n------------------------------------\n");
    printf("TREASURE HUNT Configuration Settings\n");
    printf("------------------------------------\n");
    printf("Player:\n");
    printf("   %-11s: %c\n", "Symbol", playerInfo.symbol);
    printf("   %-11s: %d\n", "Lives", playerInfo.nOfLives);
    printf("   %-11s: [ready for gameplay]\n", "Treasure");
    printf("   %-11s: [ready for gameplay]\n", "History");
    printf("\nGame:\n");
    printf("   %-11s: %d\n", "Path Length", gameInfo.pathLength);
    printf("   %-11s: ", "Bombs");

    for (i = 0; i < gameInfo.pathLength; i++)
    {
        printf("%d", gameInfo.bombs[i]);
    }

    printf("\n   %-11s: ", "Treasure");

    for (i = 0; i < gameInfo.pathLength; i++)
    {
        printf("%d", gameInfo.treasures[i]);
    }

    printf("\n\n====================================\n");
    printf("~ Get ready to play TREASURE HUNT! ~\n");
    printf("====================================\n");

    do
    {
        for (i = 0; i < playerInfo.move; i++)
        {
            if (i == playerInfo.move - 1)
            {
                printf("%c\n", playerInfo.symbol);
            }
            else
            {
                printf(" ");
            }
        }

        printf("  ");
        
        printf("\n  ");
        for (i = 1, j = 1; i <= gameInfo.pathLength; i++)
        {
            if ((i % 10) == 0)
            {
                printf("%d", j++);
            }
            else
            {
                printf("|");
            }
        }

        printf("\n  ");
        for ( i = 0, j = 1; i < gameInfo.pathLength; i++)
        {
            if (j == 10)
            {
                j = 0;
                printf("%d", j++);
            }
            else
            {
                printf("%d", j++);
            }
        }

        printf("\n+---------------------------------------------------+\n");
        printf("  Lives:  %d  | Treasures:  %d  |  Moves Remaining: %d\n", playerInfo.nOfLives, playerInfo.treasuresFound, gameInfo.maxMoves);
        printf("+---------------------------------------------------+\n");

        do
        {
            printf("Next move [%d-%d]: ", 1, gameInfo.pathLength);
            scanf("%d", &playerInfo.move);

            if (playerInfo.move < 1 || playerInfo.move > gameInfo.pathLength)
            {
                printf("  Out of Range!!!\n");
            }
        } while (playerInfo.move < 1 || playerInfo.move > gameInfo.pathLength);

        gameInfo.maxMoves -= 1;
        playerInfo.moves[playerInfo.move - 1] = 1;

    } while (playerInfo.nOfLives != 0 && gameInfo.maxMoves != 0);

    return 0;
}


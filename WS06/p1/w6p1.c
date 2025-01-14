/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #6 (P1)
Full Name  :    Rendell Velasco
Student ID#:    140014128
Email      :    rvelasco6@mysenecacollege.ca
Section    :    NDD

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define maxItems 10
int main(void)
{
    const double minMnthlyIncome = 500.00;
    const double maxMnthlyIncome = 400000.00;
    const double minCost = 100.00;

    double mnthlyIncome;
    int nItems, i;
    double totalCost = 0;

    double cost[maxItems];
    int priority[maxItems];
    char financing[maxItems];

    printf("+--------------------------+\n");
    printf("+   Wish List Forecaster   |\n");
    printf("+--------------------------+\n");

    do
    {
        printf("\nEnter your monthly NET income: $");
        scanf("%lf", &mnthlyIncome);

        if (mnthlyIncome < minMnthlyIncome)
        {
            printf("ERROR: You must have a consistent monthly income of at least $%.2lf\n", minMnthlyIncome);
        }
        else if (mnthlyIncome > maxMnthlyIncome)
        {
            printf("ERROR: Liar! I'll believe you if you enter a value no more than $%.2lf\n", maxMnthlyIncome);
        }
      
    } while (mnthlyIncome < minMnthlyIncome || mnthlyIncome > maxMnthlyIncome);

    do
    {
        printf("\nHow many wish list items do you want to forecast?: ");
        scanf("%d", &nItems);

        if (nItems < 1 || nItems > 10)
        {
            printf("ERROR: List is restricted to between 1 and %d items.\n", maxItems);
        }
    } while (nItems < 1 || nItems > 10);

    for (i = 0; i < nItems; i++)
    {
        printf("\nItem-%d Details:\n", i + 1);
        do
        {
            printf("   Item cost: $");
            scanf("%lf", &cost[i]);
            
            if (cost[i] < minCost)
            {
                printf("      ERROR: Cost must be at least $%.2lf\n", minCost);
            }
        } while (cost[i] < minCost);

        do
        {
            printf("   How important is it to you? [1=must have, 2=important, 3=want]: ");
            scanf("%d", &priority[i]);
            
            if (priority[i] < 1 || priority[i] > 3)
            {
                printf("      ERROR: Value must be between 1 and 3\n");
            }
        } while (priority[i] < 1 || priority[i] > 3);

        do
        {
            printf("   Does this item have financing options? [y/n]: ");
            scanf("%s", &financing[i]);

            if (financing[i] != 'y' && financing[i] != 'n')
            {
                printf("      ERROR: Must be a lowercase 'y' or 'n'\n");
            }
        } while (financing[i] != 'y' && financing[i] != 'n');
    }

    printf("\nItem Priority Financed        Cost\n");
    printf("---- -------- -------- -----------\n");
    
    for (i = 0; i < nItems; i++)
    {
        printf("%3d  %5d    %5c    %11.2lf\n", i + 1, priority[i], financing[i], cost[i]);
    
    }
    printf("---- -------- -------- -----------\n");

    for (i = 0; i < nItems; i++)
    {
        totalCost += cost[i];
    }

    printf("                      $%11.2lf\n", totalCost);
    printf("\nBest of luck in all your future endeavours!\n");

    return 0;
}

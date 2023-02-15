/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #5 (P2)
Full Name  :    Rendell Velasco
Student ID#:    140014128
Email      :    rvelasco6@myseneca.ca
Section    :    NDD

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MIN_YEAR 2012
#define MAX_YEAR 2022
#define LOG_DAYS 3

int main(void)
{
    const int JAN = 1;
    const int DEC = 12;

<<<<<<< Updated upstream
    int year, month, i;
    year = month = 0;

=======
    int year, month;
>>>>>>> Stashed changes
    double morningRating, eveningRating, morningSum, eveningSum;
    morningSum = eveningSum = 0.0;

    printf("General Well-being Log\n");
    printf("======================\n");

    do
    {
        printf("Set the year and month for the well-being log (YYYY MM): ");
        scanf("%d %d", &year, &month);
        if (year < MIN_YEAR || year > MAX_YEAR)
        {
            printf("   ERROR: The year must be between 2012 and 2022 inclusive\n");
        }
        if (month < JAN || month > DEC)
        {
            printf("   ERROR: Jan.(1) - Dec.(12)\n");
        }

    } while ((year < MIN_YEAR || year > MAX_YEAR) || (month < JAN || month > DEC));
    
    printf("\n*** Log date set! ***\n");

    for (i = 1;i <= LOG_DAYS; i++)
    {

        switch (month)
        {
        case 1:
            printf("\n%d-JAN-%02d\n", year, i);
            break;
        case 2:
            printf("\n%d-FEB-%02d\n", year, i);
            break;
        case 3:
            printf("\n%d-MAR-%02d\n", year, i);
            break;
        case 4:
            printf("\n%d-APR-%02d\n", year, i);
            break;
        case 5:
            printf("\n%d-MAY-%02d\n", year, i);
            break;
        case 6:
            printf("\n%d-JUN-%02d\n", year, i);
            break;
        case 7:
            printf("\n%d-JUL-%02d\n", year, i);
            break;
        case 8:
            printf("\n%d-AUG-%02d\n", year, i);
            break;
        case 9:
            printf("\n%d-SEP-%02d\n", year, i);
            break;
        case 10:
            printf("\n%d-OCT-%02d\n", year, i);
            break;
        case 11:
            printf("\n%d-NOV-%02d\n", year, i);
            break;
        case 12:
            printf("\n%d-DEC-%02d\n", year, i);
            break;
        }

        do
        {
            printf("   Morning rating (0.0-5.0): ");
            scanf("%lf", &morningRating);
            if (morningRating < 0.0 || morningRating > 5.0)
            {
                printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
            }

        } while (morningRating < 0.0 || morningRating > 5.0);
        morningSum += morningRating;
       
        do
        {
            printf("   Evening rating (0.0-5.0): ");
            scanf("%lf", &eveningRating);
            if (eveningRating < 0.0 || eveningRating > 5.0)
            {
                printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
            }

        } while (eveningRating < 0.0 || eveningRating > 5.0);
        eveningSum += eveningRating;
    }
    printf("\nSummary\n");
    printf("=======\n");
    printf("Morning total rating: %6.3lf\n", morningSum);
    printf("Evening total rating: %6.3lf\n", eveningSum);
    printf("----------------------------\n");
    printf("Overall total rating: %6.3lf\n", morningSum + eveningSum);
    printf("\nAverage morning rating:  %.1lf\n", morningSum / LOG_DAYS);
    printf("Average evening rating:  %.1lf\n", eveningSum / LOG_DAYS);
    printf("----------------------------\n");
    printf("Average overall rating:  %.1lf\n", (((morningSum / LOG_DAYS) + (eveningSum / LOG_DAYS)) / 2));

    return 0;
}

/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #4 (P1)
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

int main(void)
{
    char loop;
    int iterations, flag = 1;

    printf("+----------------------+\n");
    printf("Loop application STARTED\n");
    printf("+----------------------+");

    while (flag)
    {
        printf("\n\nD = do/while | W = while | F = for | Q = quit\n");
        printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
        scanf(" %c%d", &loop, &iterations);

        flag = (loop == 'Q' && iterations == 0) ? 0 : 1;

        if (loop == 'Q' && iterations)
        {
            printf("ERROR: To quit, the number of iterations should be 0!");
        }
        else if (!(loop == 'W' || loop == 'D' || loop == 'F'))
        {
            printf("ERROR: Invalid entered value(s)!");
        }
        else if (iterations < 3 || iterations > 20)
        {
            printf("ERROR: The number of iterations must be between 3-20 inclusive!");
        }

        if (loop == 'D' && (iterations >= 3 && iterations <= 20))
        {
            printf("DO-WHILE: ");
            do
            {
                printf("D");
                iterations--;
            } while (iterations > 0);
        }

        if (loop == 'W' && (iterations >= 3 && iterations <= 20))
        {
            printf("WHILE   : ");
            while (iterations)
            {
                printf("W");
                iterations--;
            }
        }

        if (loop == 'F' && (iterations >= 3 && iterations <= 20))
        {
            printf("FOR     : ");
            for (iterations; iterations--;)
            {
                printf("F");
            }
        }
  
    }

    printf("\n+--------------------+\n");
    printf("Loop application ENDED\n");
    printf("+--------------------+\n");

    return 0;
}
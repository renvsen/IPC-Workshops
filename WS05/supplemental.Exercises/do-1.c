#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*************************************************************************************
* In-Class Exercise
* This is an exercise to demonstrate how to use the do loop.
**************************************************************************************/

int main(void)
{
	/*********************************************************************************/
	/* The do loop differs from the while loop in that the test to see if the loop   */
	/* should be executed is done at the end of the loop, not at the beginning. As a */
	/* result, the do loop must be executed at least once.                           */
	/*                                                                               */
	/* TODO: The loop below finds the average of a series of values until a negative */
	/* number is found, indicating the end of the numbers. Complete the code to make */
	/* it function correctly.                                                        */
	/*********************************************************************************/
	int n = -1, sum = 0, count = 0;
	do
	{
		printf("Enter an integer (negative to stop): ");
		scanf("%d", &n);
		if (n >= 0)
		{
			sum += n;
			count += 1;
		}
	} while (n >= 0);

	printf("The average of the numbers is %.2lf\n", (double) sum / count,);
	
	return 0;
}


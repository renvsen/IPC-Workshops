/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #3 (P2)
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
    // You will need this when converting from grams to pounds (lbs)
    const double GRAMS_IN_LBS = 453.5924;

    //Coffee Type/Strength
    char type1, type2, type3;

    //Cofee Package Weight   
    int weight1, weight2,weight3;

    //Suggest Serving with Cream
    char bestWithCream1, bestWithCream2, bestWithCream3;

    //Customer Preferences
    char customerStrength;
    int customerServings;
    char customerCream;

    printf("Take a Break - Coffee Shop\n");
    printf("==========================\n\n");
    printf("Enter the coffee product information being sold today...\n\n");
    printf("COFFEE-1...\n");
    printf("Type ([L]ight,[M]edium,[R]ich): ");
    scanf(" %c", &type1);
    printf("Bag weight (g): ");
    scanf("%d", &weight1);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &bestWithCream1);

    printf("\nCOFFEE-2...\n");
    printf("Type ([L]ight,[M]edium,[R]ich): ");
    scanf(" %c", &type2);
    printf("Bag weight (g): ");
    scanf("%d", &weight2);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &bestWithCream2);

    printf("\nCOFFEE-3...\n");
    printf("Type ([L]ight,[M]edium,[R]ich): ");
    scanf(" %c", &type3);
    printf("Bag weight (g): ");
    scanf("%d", &weight3);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &bestWithCream3);

    printf("\n---+------------------------+---------------+-------+\n");
    printf("   |    Coffee              |   Packaged    | Best  |\n");
    printf("   |     Type               |  Bag Weight   | Served|\n");
    printf("   +------------------------+---------------+ With  |\n");
    printf("ID | Light | Medium | Rich  |  (G) | Lbs    | Cream |\n");
    printf("---+-------+--------+-------+------+--------+-------|\n");
    printf(" 1 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n", type1 == 'L' || type1 == 'l', type1 == 'M' || type1 == 'm', type1 == 'R' || type1 == 'r', weight1, (double)weight1 / GRAMS_IN_LBS, bestWithCream1 == 'Y' || bestWithCream1 == 'y');
    printf(" 2 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n", type2 == 'L' || type2 == 'l', type2 == 'M' || type2 == 'm', type2 == 'R' || type2 == 'r', weight2, (double)weight2 / GRAMS_IN_LBS, bestWithCream2 == 'Y' || bestWithCream2 == 'y');
    printf(" 3 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n", type3 == 'L' || type3 == 'l', type3 == 'M' || type3 == 'm', type3 == 'R' || type3 == 'r', weight3, (double)weight3 / GRAMS_IN_LBS, bestWithCream3 == 'Y' || bestWithCream3 == 'y');
    
    printf("\nEnter How you like your coffee...\n\n");
    printf("Coffee strength ([L]ight), [M]edium, [R]ich: ");
    scanf(" %c", &customerStrength);
    printf("Do you like your coffee with cream ([Y]es,[N]o): ");
    scanf(" %c", &customerCream);
    printf("Typical number of daily servings: ");
    scanf("%d", &customerServings);

    printf("\nThe below table shows how your preferences align to the available products: \n\n");

    printf("--------------------+-------------+-------+\n");
    printf("  |     Coffee      |  Packaged   | With  |\n");
    printf("ID|      Type       | Bag Weight  | Cream |\n");
    printf("--+-----------------+-------------+-------+\n");
    printf(" 1|       %d         |      %d      |   %d   |\n", customerStrength == type1, );

    return 0;

}


/*

Provided formatting parts for printf statements:

As described in step-7
======================
printf(" 1 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n",

As described in step-10
=======================
printf(" 1|       %d         |      %d      |   %d   |\n",

*/
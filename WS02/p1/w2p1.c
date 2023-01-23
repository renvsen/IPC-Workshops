/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #2 (P1)
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

int main(void)
{
    const double TAX = 0.13;
    const char patSize = 'S';

    double priceofSmallShirt, priceofMediumShirt, priceofLargeShirt;
    int nofShirts, sub_total, taxes, total;

    printf("Set Shirt Prices\n");
    printf("================\n");
    printf("Enter the price for a SMALL shirt: $");
    scanf("%lf",&priceofSmallShirt);
    printf("Enter the price for a MEDIUM shirt: $");
    scanf("%lf",&priceofMediumShirt);
    printf("Enter the price for a LARGE shirt: $");
    scanf("%lf",&priceofLargeShirt);

    printf("\nShirt Store Price List\n");
    printf("======================\n");
    printf("SMALL  : $%.2lf\n", priceofSmallShirt);
    printf("MEDIUM : $%.2lf\n", priceofMediumShirt);
    printf("LARGE  : $%.2lf\n\n", priceofLargeShirt);

    printf("Patty's shirt size is '%c'\n", patSize);
    printf("Number of shirts Patty is buying: ");
    scanf("%d", &nofShirts);

    sub_total = (priceofSmallShirt * nofShirts + 0.005) * 100;
    taxes = sub_total * TAX + 0.5;
    total = sub_total + taxes + 0.5;

    printf("\nPatty's shopping cart...\n");
    printf("Contains : %d shirts\n", nofShirts);
    printf("Sub-total: $%8.4lf\n", (double)sub_total / 100);
    printf("Taxes    : $%8.4lf\n", (double)taxes / 100);
    printf("Total    : $%8.4lf\n", (double)total / 100);
    
    return 0;
}
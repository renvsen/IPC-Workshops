/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #2 (P2)
Full Name  :    Rendell Velasco
Student ID#:    140014218
Email      :    rvelasco6@senecacollege.ca
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
    const char patSize = 'S', salSize = 'M', tomSize = 'L';

    //Shirt Prices
    double priceofSmallShirt, priceofMediumShirt, priceofLargeShirt;

    //Number of Shirts
    int nofPatShirts, nofTomShirts, nofSalShirts, nofShirts;

    //Shirt Calculation
    int subTotal, taxes, total, taxesTotal, overallSubTotal, overallTotal, preTaxAverage, postTaxAverage;

    //Coin Calculation
    int toonies, loonies, quarters, dimes, nickels, pennies, subBalance, balanceTotal;

    //Shirts

    printf("Set Shirt Prices\n");
    printf("================\n");
    printf("Enter the price for a SMALL shirt: $");
    scanf("%lf", &priceofSmallShirt);
    printf("Enter the price for a MEDIUM shirt: $");
    scanf("%lf", &priceofMediumShirt);
    printf("Enter the price for a LARGE shirt: $");
    scanf("%lf", &priceofLargeShirt);

    printf("\nShirt Store Price List\n");
    printf("======================\n");
    printf("SMALL  : $%.2lf\n", priceofSmallShirt);
    printf("MEDIUM : $%.2lf\n", priceofMediumShirt);
    printf("LARGE  : $%.2lf\n\n", priceofLargeShirt);

    printf("Patty's shirt size is '%c'\n", patSize);
    printf("Number of shirts Patty is buying: ");
    scanf("%d", &nofPatShirts);

    printf("\nTommy's shirt size is '%c'\n", tomSize);
    printf("Number of shirts Tommy is buying: ");
    scanf("%d", &nofTomShirts);

    printf("\nSally's shirt size is '%c'\n", salSize);
    printf("Number of shirts Sally is buying: ");
    scanf("%d", &nofSalShirts);

    nofShirts = nofPatShirts + nofSalShirts + nofTomShirts;

    printf("\n%8s %4s %5s %3s %9s %9s %9s\n", "Customer", "Size", "Price", "QTY", "Sub-Total", "Tax", "Total");
    printf("%8s %4s %5s %3s %9s %9s %9s\n", "--------", "----", "-----", "---", "---------", "---------", "---------");

    subTotal = (priceofSmallShirt * nofPatShirts + 0.005) * 100;
    overallSubTotal = subTotal;
    taxes = subTotal * TAX + 0.5;
    taxesTotal = taxes;
    total = subTotal + taxes + 0.5;
    overallTotal = total;

    printf("Patty    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", patSize, priceofSmallShirt, nofPatShirts, (double)subTotal / 100, (double)taxes / 100, (double)total / 100);

    subTotal = (priceofMediumShirt * nofSalShirts + 0.005) * 100;
    overallSubTotal += subTotal;
    taxes = subTotal * TAX + 0.5;
    taxesTotal += taxes;
    total = subTotal + taxes + 0.5;
    overallTotal += total;

    printf("Sally    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", salSize, priceofMediumShirt, nofSalShirts, (double)subTotal / 100, (double)taxes / 100, (double)total / 100);

    subTotal = (priceofLargeShirt * nofTomShirts + 0.005) * 100;
    overallSubTotal += subTotal;
    taxes = subTotal * TAX + 0.5;
    taxesTotal += taxes;
    total = subTotal + taxes + 0.5;
    overallTotal += total;

    printf("Tommy    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", tomSize, priceofLargeShirt, nofSalShirts, (double)subTotal / 100, (double)taxes / 100, (double)total / 100);
    printf("%8s %4s %5s %3s %9s %9s %9s\n", "--------", "----", "-----", "---", "---------", "---------", "---------");
    printf("%23s %9.4lf %9.4lf %9.4lf\n", " ", (double) overallSubTotal / 100, (double) taxesTotal /100, (double) overallTotal / 100);

    //Coins pre-tax

    subBalance = overallSubTotal;
    balanceTotal = overallTotal;

    printf("\nDaily retail sales represented by coins\n");
    printf("=======================================\n");
    printf("\nSales EXCLUDING tax\n");
    printf("%-8s %3s %9s\n", "Coin", "Qty", "Balance");
    printf("%8s %3s %9s\n", "--------", "---", "---------");
    printf("%22.4lf\n", (double)subBalance / 100);
    
    toonies = subBalance / 200;
    subBalance %= 200;

    printf("Toonies  %3d %9.4lf\n", toonies, (double)subBalance / 100);

    loonies = subBalance / 100;
    subBalance %= 100;
    
    printf("Loonies  %3d %9.4lf\n", loonies, (double)subBalance / 100);

    quarters = subBalance / 25;
    subBalance %= 25;

    printf("Quarters %3d %9.4lf\n", quarters, (double)subBalance / 100);

    dimes = subBalance / 10;
    subBalance %= 10;

    printf("Dimes    %3d %9.4lf\n", dimes, (double)subBalance / 100);

    nickels = subBalance / 5;
    subBalance %= 5;

    printf("Nickels  %3d %9.4lf\n", nickels, (double)subBalance / 100);

    pennies = subBalance / 1;
    subBalance %= 1;

    printf("Pennies  %3d %9.4lf\n", pennies, (double)subBalance / 100);

    preTaxAverage = ((double)overallSubTotal / nofShirts + 0.005) * 100;

    printf("\nAverage cost/shirt: %9.4lf\n", (double) preTaxAverage / 10000 );

    //Coins post-tax

   printf("\nDaily retail sales represented by coins\n");
    printf("=======================================\n");
    printf("\nSales INCLUDING tax\n");
    printf("%-8s %3s %9s\n", "Coin", "Qty", "Balance");
    printf("%8s %3s %9s\n", "--------", "---", "---------");
    printf("%22.4lf\n", (double)balanceTotal / 100);
    
    toonies = balanceTotal / 200;
    balanceTotal %= 200;

    printf("Toonies  %3d %9.4lf\n", toonies,(double) balanceTotal/ 100);

    loonies = balanceTotal / 100;
    balanceTotal %= 100;
    
    printf("Loonies  %3d %9.4lf\n", loonies, (double)balanceTotal / 100);

    quarters = balanceTotal / 25;
    balanceTotal %= 25;

    printf("Quarters %3d %9.4lf\n", quarters, (double)balanceTotal / 100);

    dimes = balanceTotal / 10;
    balanceTotal %= 10;

    printf("Dimes    %3d %9.4lf\n", dimes, (double)balanceTotal / 100);

    nickels = balanceTotal / 5;
    balanceTotal %= 5;

    printf("Nickels  %3d %9.4lf\n", nickels, (double)balanceTotal / 100);

    pennies = balanceTotal / 1;
    balanceTotal %= 1;

    printf("Pennies  %3d %9.4lf\n", pennies, (double)balanceTotal / 100);

    postTaxAverage = ((double)overallTotal / nofShirts + 0.005) * 100;

    printf("\nAverage cost/shirt: %9.4lf\n", (double) postTaxAverage / 10000 );






    return 0;
}
/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #3 (P1)
Full Name  :    Rendell Velasco
Student ID#:    140014218
Email      :    rvelasco6@gmail.com
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
    // You must use this variable in #3 data analysis section!
    const double testValue = 330.99;

    //Product ID   
    const int productID1 = 111;
    const int productID2 = 222; 
    const int productID3 = 111;
    
    //Price
    const double price1 = 111.49;
    const double price2 = 222.99;
    const double price3 = 334.49;

    //Taxed
    const char tax1 = 'Y';
    const char tax2 = 'N';
    const char tax3 = 'N';

    //Average Price
    double averagePrice;

    printf("Product Information\n");
    printf("===================\n");
    printf("Product-1 (ID:%d)\n", productID1);
    printf("  Taxed: %c\n", tax1);
    printf("  Price: $%.4lf\n\n", price1);
    printf("Product-2 (ID:%d)\n", productID2);
    printf("  Taxed: %c\n", tax2);
    printf("  Price: $%.4lf\n\n", price2);
    printf("Product-3 (ID:%d)\n", productID3);
    printf("  Taxed: %c\n", tax3);
    printf("  Price: $%.4lf\n\n", price3);

    averagePrice = (price1 + price2 + price3) / 3;

    printf("The average of all prices is: $%.4lf\n\n", averagePrice);

    printf("About Relational and Logical Expressions!\n");
    printf("========================================\n");
    printf("1. These expressions evaluate to TRUE or FALSE\n");
    printf("2. FALSE: is always represented by integer value 0\n");
    printf("3. TRUE : is represented by any integer value other than 0\n\n");

    printf("Some Data Analysis...\n");
    printf("=====================\n");
    printf("1. Is product 1 taxable? -> %d\n\n", tax1 == 'Y');
    printf("2. Are products 2 and 3 both NOT taxable (N)? -> %d\n\n", tax2 && tax3 == 'N');
    printf("3. Is product 3 less than testValue ($%.2lf)? -> %d\n\n", testValue, price3 < testValue);
    printf("4. Is the price of product 3 more than both product 1 and 2 combined> -> %d\n\n", price3 > (price1 + price2));
    printf("5. Is the price of product 1 equal to or more than the price difference\n");
    printf("   of product 3 LESS product 2? ->  %d (price difference : $%.2lf)\n\n", price1 >= (price3 - price2), price3 - price2);
    printf("6. Is the price of product 2 equal to or more than the average price? -> %d\n\n", price2 >= averagePrice);
    printf("7. Based on product ID, product 1 is unique -> %d\n\n", productID1 != productID2 && productID1 != productID3);
    printf("8. Based on product ID, product 2 is unique -> %d\n\n", productID2 != productID1 && productID2 != productID3);
    printf("9. Based on product ID, product 3 is unique -> %d\n", productID3 != productID1 && productID3 != productID2);

    return 0;
}
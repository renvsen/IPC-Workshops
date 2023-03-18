/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #8 (P1)
Full Name  :	Rendell Velasco
Student ID#:	140014218
Email      :	rvelasco6@myseneca.ca
Section    :	NDD

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/


// System Libraries
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// User Libraries
#include"w8p1.h"


// 1. Get user input of int type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
int getIntPositive(int *wholeNumber)
{
	int n;

	if (wholeNumber == NULL)
	{
		do
		{
			scanf("%d", &n);
			if (n <= 0)
			{
				printf("ERROR: Enter a positive value: ");
			}

		} while (n <= 0);
	}
	else
	{
		do
		{
			scanf("%d", wholeNumber);
			if (*wholeNumber <= 0)
			{
				printf("ERROR: Enter a positive value: ");
			}

		} while (*wholeNumber <= 0);
		n = *wholeNumber;
	}

	return n;
}

// 2. Get user input of double type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
double getDoublePositive(double *decimal)
{

	double d;

	if (decimal == NULL)
	{
		do
		{
			scanf("%lf", &d);
			if (d <= 0)
			{
				printf("ERROR: Enter a positive value: ");
			}

		} while (d <= 0);
	}
	else
	{
		do
		{
			scanf("%lf", decimal);
			if (*decimal <= 0)
			{
				printf("ERROR: Enter a positive value: ");
			}

		} while (*decimal <= 0);
		d = *decimal;
	}

	return d;
}

// 3. Opening Message (include the number of products that need entering)
void openingMessage(const int nOfProducts, const int sggstdServings)
{
	printf("Cat Food Cost Analysis\n");
	printf("======================\n\n");
	printf("Enter the details for %d dry food bags of product data for analysis.\n", nOfProducts);
	printf("NOTE: A 'serving' is %dg\n", sggstdServings);
}

// 4. Get user input for the details of cat food product
struct CatFoodInfo getCatFoodInfo(const int sequence)
{
	struct CatFoodInfo product = { 0, 0.0, 0, 0.0 };

	printf("\nCat Food Product #%d\n", sequence + 1);
	printf("--------------------\n");
	printf("%-14s: ", "SKU");
	product.sku = getIntPositive(&product.sku);
	printf("%-14s: $", "PRICE");
	product.price = getDoublePositive(&product.price);
	printf("%-14s: ", "WEIGHT (LBS)");
	product.weight = getDoublePositive(&product.weight);
	printf("%-14s: ", "CALORIES/SERV.");
	product.calPerSrving = getIntPositive(&product.calPerSrving);

	return product;
}


// 5. Display the formatted table header
void displayCatFoodHeader(void)
{
	printf("SKU         $Price    Bag-lbs Cal/Serv\n");
	printf("------- ---------- ---------- --------\n");
}

// 6. Display a formatted record of cat food data
void displayCatFoodData(const int sku, const double* price, const double* weight, const int calPerSrving)
{
	printf("%07d %10.2lf %10.1lf %8d\n", sku, *price, *weight, calPerSrving);
}

// 7. Logic entry point
void start(void)
{
	int i;

	struct CatFoodInfo product[MAX_PRODUCTS] = { {0,0.0,0,0.0} };
	
	openingMessage(MAX_PRODUCTS,SGGSTD_SRVING_IN_GRAMS);

	for ( i = 0; i < MAX_PRODUCTS; i++)
	{
		product[i] = getCatFoodInfo(i);
	}
	
	printf("\n");

	displayCatFoodHeader();

	for (i = 0; i < MAX_PRODUCTS; i++)
	{
		displayCatFoodData(product[i].sku, &product[i].price, &product[i].weight, product[i].calPerSrving);
	}
	
}

/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #8 (P2)
Full Name  : 
Student ID#: 
Email      : 
Section    : 

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS


// System Libraries
#include <stdio.h>

// User-Defined Libraries
#include "w8p2.h"

// ----------------------------------------------------------------------------
// PART-1

// 1. Get user input of int type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
int getIntPositive(int* wholeNumber)
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
double getDoublePositive(double* decimal)
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
	product.lbsWeight = getDoublePositive(&product.lbsWeight);
	printf("%-14s: ", "CALORIES/SERV.");
	product.calPerServing = getIntPositive(&product.calPerServing);

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



// ----------------------------------------------------------------------------
// PART-2

// 8. convert lbs: kg (divide by 2.20462)
double convertLbsKg(const double* weightInLbs, double* convertedKg)
{
	double resultInKg;
	resultInKg = *weightInLbs / CONVERT_LBS_TO_KG;

	if (convertedKg != NULL)
	{
		*convertedKg = resultInKg;
	}

	return resultInKg;
}

// 9. convert lbs: g (call convertKG, then * 1000)
int convertLbsG(const double *weightInLbs, int *convertedG)
{
	int resultInG;
	resultInG = (*weightInLbs / CONVERT_LBS_TO_KG) * 1000;

	if (convertedG != NULL)
	{
		*convertedG = resultInG;
	}

	return resultInG;
}

// 10. convert lbs: kg and g
void convertLbs(const double* weightInLbs, double* convertedKg, int* convertedG)
{
	double resultInKg;
	resultInKg = *weightInLbs / CONVERT_LBS_TO_KG;

	if (convertedKg != NULL)
	{
		*convertedKg = resultInKg;
	}

	int resultInG;
	resultInG = (*weightInLbs / CONVERT_LBS_TO_KG) * 1000;

	if (convertedG != NULL)
	{
		*convertedG = resultInG;
	}

}

// 11. calculate: servings based on gPerServ
double calculateServings(const int gServing, const int totalGramsProdut, double* NofServings)
{
	double d = (double) totalGramsProdut / gServing;

	if (NofServings != NULL)
	{
		*NofServings = d;
	}

	return d;
}

// 12. calculate: cost per serving
double calculateCostPerServing(const double* productPrice, const double* NofServings, double* resultCostPerServing)
{
	double d = *productPrice / *NofServings;

	if (resultCostPerServing != NULL)
	{
		*resultCostPerServing = d;
	}

	return d;
}

// 13. calculate: cost per calorie
double calculateCostPerCal(const double* productPrice, const double* totalCal, double* resultCostPerCal)
{
	double d = *productPrice / *totalCal;

	if (resultCostPerCal != NULL)
	{
		*resultCostPerCal = d;
	}

	return d;
}

// 14. Derive a reporting detail record based on the cat food product data
struct ReportData calculateReportData(const struct CatFoodInfo productData)
{
	struct ReportData analysis = { 0 };
	analysis.product = productData;
	analysis.kgWeight = convertLbsKg(&productData.lbsWeight, NULL);
	analysis.gWeight = convertLbsG(&productData.lbsWeight, NULL);
	analysis.totalServings = calculateServings(SGGSTD_SRVING_IN_GRAMS, analysis.gWeight, NULL);
	analysis.costPerServing = calculateCostPerServing(&productData.price, &analysis.totalServings, NULL);

	double totalcalories = productData.calPerServing * analysis.totalServings;
	analysis.costCalPerServing = calculateCostPerCal(&productData.price, &totalcalories, NULL);

	return analysis;
}

// 15. Display the formatted table header for the analysis results
void displayReportHeader(void)
{
	printf("Analysis Report (Note: Serving = %dg)\n", SGGSTD_SRVING_IN_GRAMS);
	printf("---------------\n");
	printf("SKU         $Price    Bag-lbs     Bag-kg     Bag-g Cal/Serv Servings  $/Serv   $/Cal\n");
	printf("------- ---------- ---------- ---------- --------- -------- -------- ------- -------\n");
}

// 16. Display the formatted data row in the analysis table
void displayReportData(const struct ReportData productData, const int cheapest)
{
	printf("%07d %10.2lf %10.1lf %10.4lf %9d %8d %8.1lf %7.2lf %7.5lf",
		productData.product.sku, productData.product.price, productData.product.lbsWeight, 
		productData.kgWeight, productData.gWeight ,productData.product.calPerServing,
		productData.totalServings,productData.costPerServing, productData.costCalPerServing);

	if (cheapest)
	{
		printf(" ***\n");
	}
	else
	{
		printf("\n");
	}
}

// 17. Display the findings (cheapest)
void displayFinalAnalysis(struct CatFoodInfo cheapestProduct)
{
	printf("Final Analysis\n");
	printf("--------------\n");
	printf("Based on the comparison data, the PURR-fect economical options is:\n");
	printf("SKU:%07d Price: $%.2lf\n\n", cheapestProduct.sku, cheapestProduct.price);
	printf("Happy shoppping!\n");
}

// ----------------------------------------------------------------------------

// 7. Logic entry point
void start(void)
{
	int i,j,cheap;

	struct CatFoodInfo product[MAX_PRODUCTS] = { {0,0.0,0,0.0} };
	struct ReportData analysis[MAX_PRODUCTS] = { 0 };

	openingMessage(MAX_PRODUCTS, SGGSTD_SRVING_IN_GRAMS);

	for (i = 0; i < MAX_PRODUCTS; i++)
	{
		product[i] = getCatFoodInfo(i);
	}


	printf("\n");

	displayCatFoodHeader();

	for (i = 0; i < MAX_PRODUCTS; i++)
	{
		displayCatFoodData(product[i].sku, &product[i].price, &product[i].lbsWeight, product[i].calPerServing);
	}

	for ( i = 0; i < MAX_PRODUCTS; i++)
	{
		analysis[i] = calculateReportData(product[i]);
	}

	printf("\n");
	displayReportHeader();

	j = 0;
	for ( i = 0; i < MAX_PRODUCTS; i++)
	{
		if (analysis[i].costPerServing < analysis[i + 1].costPerServing)
		{
			if (i < MAX_PRODUCTS)
			{
				j = i;
			}
		}
	}

	for (cheap = 0, i = 0; i < MAX_PRODUCTS; i++)
	{
		if (i == j)
		{
			cheap = 1;
		}
		else
		{
			cheap = 0;
		}
		displayReportData(analysis[i], cheap);
	}
	printf("\n");
	displayFinalAnalysis(product[j]);
}


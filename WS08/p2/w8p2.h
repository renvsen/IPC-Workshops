/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #8 (P2)
Full Name  :    Rendell Velasco
Student ID#:    140014218
Email      :    rvelasco6@myseneca.ca
Section    :    NDD

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/


// ----------------------------------------------------------------------------
// defines/macros
#define MAX_PRODUCTS 3
#define SGGSTD_SRVING_IN_GRAMS 64
#define CONVERT_LBS_TO_KG 2.20462

// ----------------------------------------------------------------------------
// structures
struct CatFoodInfo
{
    int sku;
    double price;
    int calPerServing;
    double lbsWeight;
};

struct ReportData
{
    struct CatFoodInfo product;
    double kgWeight;
    int gWeight;
    double totalServings;
    double costPerServing;
    double costCalPerServing;

};

// ----------------------------------------------------------------------------
// function prototypes

// 1. Get user input of int type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
int getIntPositive(int* wholeNumber);

// 2. Get user input of double type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
double getDoublePositive(double* decimal);

// 3. Opening Message (include the number of products that need entering)
void openingMessage(const int nOfProducts, const int sggstdServings);

// 4. Get user input for the details of cat food product
struct CatFoodInfo getCatFoodInfo(const int sequence);

// 5. Display the formatted table header
void displayCatFoodHeader(void);

// 6. Display a formatted record of cat food data
void displayCatFoodData(const int sku, const double* price, const double* weight, const int calPerServing);

// ----------------------------------------------------------------------------
// PART-2

// 8. convert lbs: kg
double convertLbsKg(const double *weightInLbs, double *convertedKg);

// 9. convert lbs: g
int convertLbsG(const double *weightInLbs, int *convertedG);

// 10. convert lbs: kg / g
void convertLbs(const double *weightInLbs, double *convertedKg, int *convertedG);

// 11. calculate: servings based on gPerServ
double calculateServings(const int gServing, const int totalGramsProdut, double *NofServings);

// 12. calculate: cost per serving
double calculateCostPerServing(const double *productPrice, const double *NofServings, double *resultCostPerServing);

// 13. calculate: cost per calorie
double calculateCostPerCal(const double *productPrice, const double *totalCal, double *resultCostPerCal);

// 14. Derive a reporting detail record based on the cat food product data
struct ReportData calculateReportData(const struct CatFoodInfo productData);

// 15. Display the formatted table header for the analysis results
void displayReportHeader(void);

// 16. Display the formatted data row in the analysis table
void displayReportData(const struct ReportData productData, const int cheapest);

// 17. Display the findings (cheapest)
void displayFinalAnalysis(struct CatFoodInfo cheapestProduct);

// ----------------------------------------------------------------------------

// 7. Logic entry point 
void start(void);

/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #8 (P1)
Full Name  :    Rendell Velasco
Student ID#:    140014218
Email      :    rvelasco6@myseneca.ca
Section    :    NDD

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define MAX_PRODUCTS 3
#define SGGSTD_SRVING_IN_GRAMS 64

// ----------------------------------------------------------------------------
// structures

struct CatFoodInfo
{
    int sku;
    double price;
    int calPerSrving;
    double weight;
};

// ----------------------------------------------------------------------------
// function prototypes

// 1. Get user input of int type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
int getIntPositive(int *wholeNumber);

// 2. Get user input of double type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
double getDoublePositive(double *decimal);

// 3. Opening Message (include the number of products that need entering)
void openingMessage(const int nOfProducts, const int sggstdServings);

// 4. Get user input for the details of cat food product
struct CatFoodInfo getCatFoodInfo(const int sequence);

// 5. Display the formatted table header
void displayCatFoodHeader(void);

// 6. Display a formatted record of cat food data
void displayCatFoodData(const int sku, const double *price, const double *weight, const int calPerSrving);

// 7. Logic entry point
void start(void);

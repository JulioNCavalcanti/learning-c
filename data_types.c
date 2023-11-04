#include <stdio.h>

int main()
{
    // A variable in C must be a specified data type, and you must use a format specifier inside the printf() function to display it:

    // Create variables
    int my_num = 5;            // Integer (whole number)
    float my_float_num = 5.99; // Floating point number
    char my_letter = 'D';      // Character

    // Print variables
    printf("%d\n", my_num);
    printf("%f\n", my_float_num);
    printf("%c\n", my_letter);

    //////////////////////////////////// BASIC DATA TYPES ///////////////////////////////////////

    /*
    The data type specifies the size and type of information the variable will store.

    In this tutorial, we will focus on the most basic ones:

        Data Type	       Size	               Description
        int	            2 or 4 bytes	    Stores whole numbers, without decimals
        float	        4 bytes	            Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits
        double	        8 bytes	            Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits
        char	        1 byte	            Stores a single character/letter/number, or ASCII values
    */

    /////////////////////////////////////// BASIC FORMAT SPECIFIERS ////////////////////////////////////////

    /*
    There are different format specifiers for each data type. Here are some of them:

    Format Specifier	       Data Type
       %d or %i	              int
       %f	                  float
       %lf	                  double
       %c	                  char
       %s	                  Used for strings (text), which you will learn more about in a later chapter
    */

    ////////////////////////////////// SET DECIMAL PRECISION //////////////////////////////////////////

    // You have probably already noticed that if you print a floating point number, the output will show many digits after the decimal point:
    float myFloatNum = 3.5;
    double myDoubleNum = 19.99;

    printf("%f\n", myFloatNum); // Outputs 3.500000
    printf("%lf", myDoubleNum); // Outputs 19.990000

    /*
    If you want to remove the extra zeros (set decimal precision), you can use a dot (.) followed by a
    number that specifies how many digits that should be shown after the decimal point:
    */
    float myFloatNum2 = 3.5;

    printf("%f\n", myFloatNum2);   // Default will show 6 digits after the decimal point
    printf("%.1f\n", myFloatNum2); // Only show 1 digit
    printf("%.2f\n", myFloatNum2); // Only show 2 digits
    printf("%.4f", myFloatNum2);   // Only show 4 digits

    return 0;
}
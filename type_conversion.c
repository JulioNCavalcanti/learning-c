#include <stdio.h>

int main()
{
    /////////////////////////////////////////////// TYPE CONVERSION ////////////////////////////////////

    /*
    Sometimes, you have to convert the value of one data type to another type. This is known as type conversion.

    For example, if you try to divide two integers, 5 by 2, you would expect the result to be 2.5. But since we are working
    with integers (and not floating-point values), the following example will just output 2:
    */
    int x = 5;
    int y = 2;
    int sum = 5 / 2;

    printf("%d\n", sum); // Outputs 2

    /*
    To get the right result, you need to know how type conversion works.

    There are two types of conversion in C:

        Implicit Conversion (automatically)
        Explicit Conversion (manually)
    */

    ////////////////////////////////////////// IMPLICIT CONVERSION ///////////////////////////////////////////

    /*
    Implicit conversion is done automatically by the compiler when you assign a value of one type to another.

    For example, if you assign an int value to a float type:
    */

    // Automatic conversion: int to float
    float myFloat = 9;

    printf("%f\n", myFloat); // 9.000000

    /*
    As you can see, the compiler automatically converts the int value 9 to a float value of 9.000000.

    This can be risky, as you might lose control over specific values in certain situations.

    Especially if it was the other way around - the following example automatically converts the float value 9.99 to an int value of 9:
    */

    // Automatic conversion: float to int
    int myInt = 9.99;

    printf("%d\n", myInt); // 9

    /*
    What happened to .99? We might want that data in our program! So be careful. It is important that you know how the compiler
    work in these situations, to avoid unexpected results.

    As another example, if you divide two integers: 5 by 2, you know that the sum is 2.5. And as you know from the
    beginning of this page, if you store the sum as an integer, the result will only display the number 2. Therefore, it would be
    better to store the sum as a float or a double, right?
    */

    float sum2 = 5 / 2;
    printf("%f\n", sum); // 2.000000

    /*
    Why is the result 2.00000 and not 2.5? Well, it is because 5 and 2 are still integers in the division. In this case, you need to manually
    convert the integer values to floating-point values.
    */

    ////////////////////////////////////////////////////// EXPLICIT CONVERSION ////////////////////////////////////////////////////////

    // Explicit conversion is done manually by placing the type in parentheses () in front of the value.

    // Manual conversion: int to float
    float sum3 = (float)5 / 2;
    printf("%f\n", sum3); // 2.500000

    // You can also place the type in front of a variable:
    int num1 = 5;
    int num2 = 2;
    float sum4 = (float)num1 / num2;

    printf("%f\n", sum4);
    return 0;
}
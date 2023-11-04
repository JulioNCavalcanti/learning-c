#include <stdio.h>

int main()
{
    /////////////////////////////////////////////// OPERATORS /////////////////////////////////////////////////

    /*
    Operators are used to perform operations on variables and values.

    In the example below, we use the + operator to add together two values:
    */
    int myNum = 100 + 50;

    /*
    Although the + operator is often used to add together two values, like in the example above, it can also be used to
    add together a variable and a value, or a variable and another variable:
    */
    int sum1 = 100 + 50;    // 150 = (100 + 15)
    int sum2 = sum1 + 250;  // 400 = (150 + 250)
    int sum3 = sum2 + sum2; // 800 = (400 + 400)

    /*
    C divides the operators into the following groups:

        Arithmetic operators
        Assignment operators
        Comparison operators
        Logical operators
        Bitwise operators
    */

    ////////////////////////////////////////////////////// ARITHMETIC OPERATORS ///////////////////////////////////////

    /*
    Arithmetic operators are used to perform common mathematical operations.

    Operator	Name	                Description	                                 Example
        +	      Addition	           Adds together two values	                      x + y
        -	      Subtraction	       Subtracts one value from another	              x - y
        *	      Multiplication	   Multiplies two values	                      x * y
        /	      Division	           Divides one value by another	                  x / y
        %	      Modulus	           Returns the division remainder	              x % y
        ++	      Increment	           Increases the value of a variable by 1	       ++x
        --	      Decrement	           Decreases the value of a variable by 1	       --x
    */

    /////////////////////////////////////////////////// ASSIGNMENT OPERATORS ///////////////////////////////////////////

    /*
    Assignment operators are used to assign values to variables.

    In the example below, we use the assignment operator (=) to assign the value 10 to a variable called x:
    */
    int x = 10;

    // The addition assignment operator (+=) adds a value to a variable:
    int y = 10;
    y += 5; // 15

    /*
    A list of all assignment operators:

    Operator	  Example	         Same As
       =	      x = 5	            x = 5
       +=	      x += 3	        x = x + 3
       -=	      x -= 3	        x = x - 3
       *=	      x *= 3	        x = x * 3
       /=	      x /= 3	        x = x / 3
       %=	      x %= 3	        x = x % 3
       &=	      x &= 3	        x = x & 3
       |=	      x |= 3	        x = x | 3
       ^=	      x ^= 3	        x = x ^ 3
       >>=	      x >>= 3	        x = x >> 3
       <<=	      x <<= 3	        x = x << 3
    */

    ///////////////////////////////////// COMPARASION OPERATORS //////////////////////////////////////////////
    /*
    Comparison operators are used to compare two values (or variables). This is important in
    programming, because it helps us to find answers and make decisions.'

    The return value of a comparison is either 1 or 0, which means true (1) or false (0). These values are known as Boolean values

    In the following example, we use the greater than operator (>) to find out if 5 is greater than 3:
    */

    int num1 = 5;
    int num2 = 3;
    printf("%d\n", num1 > num2); // returns 1 (true) because 5 is greater than 3

    /*
    A list of all comparison operators:

    Operator	         Name	                  Example
       ==	    Equal to	                      x == y
       !=	    Not equal	                      x != y
       >	    Greater than	                  x > y
       <	    Less than	                      x < y
       >=	    Greater than or equal to	      x >= y
       <=	    Less than or equal to	          x <= y
    */

    //////////////////////////////////// LOGICAL OPERATOR ////////////////////////////////////////

    /*
    You can also test for true or false values with logical operators.

    Logical operators are used to determine the logic between variables or values:
    Operator	         Name	                   Description Example
       && 	          Logical and	           Returns true if both statements are true	x < 5 &&  x < 10
       || 	          Logical or	           Returns true if one of the statements is true	x < 5 || x < 4
       !	          Logical not	           Reverse the result, returns false if the result is true	!(x < 5 && x < 10)

    */

    ////////////////////////////////////////// SIZEOF OPERATOR /////////////////////////////////////////'

    // The memory size (in bytes) of a data type or a variable can be found with the sizeof operator:
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    printf("%lu\n", sizeof(myInt));
    printf("%lu\n", sizeof(myFloat));
    printf("%lu\n", sizeof(myDouble));
    printf("%lu\n", sizeof(myChar));

    /*
    Note that we use the %lu format specifer to print the result, instead of %d. It is because the compiler
    expects the sizeof operator to return a long unsigned int (%lu), instead of int (%d). On some
    computers it might work with %d, but it is safer to use %lu.
    */

    return 0;
}
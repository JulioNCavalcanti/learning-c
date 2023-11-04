/*
Variables are containers for storing data values, like numbers and characters.

In C, there are different types of variables (defined with different keywords), for example:

    int - stores integers (whole numbers), without decimals, such as 123 or -123
    float - stores floating point numbers, with decimals, such as 19.99 or -19.99
    char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
*/

#include <stdio.h>

int main()
{
    ////////////////////////////////////// DECLARING (CREATING) VARIABLES ///////////////////////////////////////////

    /* T
    To create a variable, specify the type and assign it a value:

        type variable_name = value;

    Where type is one of C types (such as int), and variableName is the name of the variable (such as x or myName).
    The equal sign is used to assign a value to the variable.
    */

    // So, to create a variable that should store a number, look at the following example:
    int my_age = 18;

    // You can also declare a variable without assigning the value, and assign the value later:
    int year;
    year = 2023;

    ///////////////////////////////////////////// OUTPUT VARIABLE ///////////////////////////////////////////////////

    /*
    You learned from the output chapter that you can output values/print text with the printf() function.

    In many other programming languages (like Python, Java, and C++), you would normally use a print function
    to display the value of a variable. However, this is not possible in C:

        int myNum = 15;
        printf(myNum);  // Nothing happens

    To output variables in C, you must get familiar with something called "format specifiers".
    */

    /*
    Format specifiers are used together with the printf() function to tell the compiler what type of data the variable is storing.
    It is basically a placeholder for the variable value.

    A format specifier starts with a percentage sign %, followed by a character.

    For example, to output the value of an int variable, you must use the format specifier %d or %i surrounded
    by double quotes, inside the printf() function:
    */

    int myNum = 15;
    printf("%d", myNum); // Outputs 15

    // To print other types, use %c for char and %f for float:

    // Create variables
    int my_num = 14;
    float my_float_num = 5.99;
    char my_letter = 'J';

    // Print variables
    printf("%d\n", my_num);
    printf("%f\n", my_float_num);
    printf("%c\n", my_letter);

    // To combine both text and a variable, separate them with a comma inside the printf() function:
    int number = 15;
    printf("My favorite number is: %d", number);

    // To print different types in a single printf() function, you can use the following:
    int number2 = 40;
    char letter2 = 'C';

    printf("My number is %d and my letter is %c\n", number2, letter2);

    ////////////////////////////////////// CHANGE VARIABLE VALUES //////////////////////////////////////////

    // Note: If you assign a new value to an existing variable, it will overwrite the previous value:
    int number3 = 15; // number3 is 15
    number3 = 10;     // Now number3 is 10

    // You can also assign the value of one variable to another:
    int number4 = 30;
    int number5 = 60;

    number4 = number5; // Assign the value of number5 (60) to number4

    printf("%d\n", number4);

    // Or copy values to empty variables:
    int number6;
    int number7 = 456;

    number6 = number7; // assign the value of number7 to number6

    printf("%d\n", number6);

    ////////////////////////////////////////////  ADD VARIABLES TOGETHER //////////////////////////////////

    // To add a variable to another variable, you can use the + operator:
    int x = 5;
    int y = 6;
    int sum = x + y;

    printf("%d\n", sum);

    /////////////////////////////////////// DECLARE MULTIPLE VARIABLES /////////////////////////////////////////

    // To declare more than one variable of the same type, use a comma-separatest list:
    int x2 = 5, y2 = 6, z2 = 50;
    printf("%d\n", x2 + y2 + z2);

    // You can also assign the same value to multiple variables of the same type:
    int x3, y3, z3;
    x3 = y3 = z3 = 50;

    printf("%d\n", x3 + y3 + z3);

    ////////////////////////////////////// C VARIABLES NAMES /////////////////////////////////////////////

    /*
    All C variables must be identified with unique names.

    These unique names are called identifiers.

    Identifiers can be short names (like x and y) or more descriptive names (age, sum, totalVolume).

    Note: It is recommended to use descriptive names in order to create understandable and maintainable code:
    */

    // Good
    int minutes_per_hour = 60;

    // OK, but not so easy to understand what m actually is
    int m = 60;

    /*
    The general rules for naming variables are:

        Names can contain letters, digits and underscores
        Names must begin with a letter or an underscore (_)
        Names are case sensitive (myVar and myvar are different variables)
        Names cannot contain whitespaces or special characters like !, #, %, etc.
        Reserved words (such as int) cannot be used as names
    */

    /////////////////////////////////// REAL-LIFE EXAMPLE //////////////////////////////////

    /*
    Often in our examples, we simplify variable names to match their data type (myInt or myNum for int types, myChar for char types etc).
    This is done to avoid confusion.

    However, if you want a real-life example on how variables can be used, take a look at the following, where we have made
    a program that stores different data of a college student:
    */

    // Student data
    int studentID = 15;
    int studentAge = 23;
    float studentFee = 75.25;
    char studentGrade = 'B';

    // Print variables
    printf("Student id: %d\n", studentID);
    printf("Student age: %d\n", studentAge);
    printf("Student fee: %f\n", studentFee);
    printf("Student grade: %c", studentGrade);
    
    return 0;
}
#include <stdio.h>
#include <stdbool.h>

int main()
{
    ////////////////////////////////////////////// BOOLEANS //////////////////////////////////////////////////////

    /*
     Very often, in programming, you will need a data type that can only have one of two values, like:

        YES / NO
        ON / OFF
        TRUE / FALSE
        For this, C has a bool data type, which is known as booleans.

    Booleans represent values that are either true or false.
    */

    //////////////////////////////////////////// BOOLEANS VARIABLES ////////////////////////////////////////////////

    /*
    In C, the bool type is not a built-in data type, like int or char.

    It was introduced in C99, and you must import the following header file to use it:

        #include <stdbool.h>

    A boolean variable is declared with the bool keyword and can only take the values true or false:
    */
    bool isProgrammingFun = true;
    bool isFishTasty = false;

    /*
    Before trying to print the boolean variables, you should know that boolean values are returned as integers:

        1 (or any other number that is not 0) represents true
        0 represents false

    Therefore, you must use the %d format specifier to print a boolean value:
    */

    // Create boolean variables
    bool isProgrammingFun2 = true;
    bool isFishTasty2 = false;

    // Return boolean values
    printf("%d\n", isProgrammingFun2);
    printf("%d\n", isFishTasty2);

    // However, it is more common to return a boolean value by comparing values and variables.

    //////////////////////////////////////////////// COMPARING VALUES AND VARIABLES //////////////////////////////////////

    /*
    Comparing values are useful in programming, because it helps us to find answers and make decisions.

    For example, you can use a comparison operator, such as the greater than (>) operator, to compare two values:
    */
    printf("%d\n", 10 > 9); // Returns 1 (true) because 10 is greater than 9
    // From the example above, you can see that the return value is a boolean value (1).

    // You can also compare two variables
    int x = 10;
    int y = 9;
    printf("%d\n", x > y);

    // In the example below, we use the equal to (==) operator to compare different values:
    printf("%d\n", 10 == 10); // Returns 1 (true), because 10 is equal to 10
    printf("%d\n", 10 == 15); // Returns 0 (false), because 10 is not equal to 15
    printf("%d\n", 5 == 55);  // Returns 0 (false) because 5 is not equal to 55

    // You are not limited to only compare numbers. You can also compare boolean variables, or even special structures, like arrays
    bool isHamburgerTasty = true;
    bool isPizzaTasty = true;

    // Find out if both hamburger and pizza is tasty
    printf("%d\n", isHamburgerTasty == isPizzaTasty);

    /////////////////////////////////////////////////// REAL LIFE EXAMPLE ///////////////////////////////////////////

    /*
    Let's think of a "real life example" where we need to find out if a person is old enough to vote.

    In the example below, we use the >= comparison operator to find out if the age (25) is greater than OR equal to the voting age limit, which is set to 18:
    */
    int myAge = 25;
    int votingAge = 18;

    printf("%d\n", myAge >= votingAge); // Returns 1 (true), meaning 25 year olds are allowed to vote!

    /*
    Cool, right? An even better approach (since we are on a roll now), would be to wrap the code above in an if...else statement,
    so we can perform different actions depending on the result:

    Output "Old enough to vote!" if myAge is greater than or equal to 18. Otherwise output "Not old enough to vote.":
    */
    int myAge2 = 25;
    int votingAge2 = 18;

    if (myAge2 >= votingAge2)
    {
        printf("Old enough to vote!");
    }
    else
    {
        printf("Not old enough to vote.");
    }

    return 0;
}
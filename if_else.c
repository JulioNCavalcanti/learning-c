#include <stdio.h>

int main()
{
    ////////////////////////////////////////// CONDITIONS AND IF STATEMENTS ///////////////////////////

    /*
    You have already learned that C supports the usual logical conditions from mathematics:

        * Less than: a < b
        * Less than or equal to: a <= b
        * Greater than: a > b
        * Greater than or equal to: a >= b
        * Equal to a == b
        * Not Equal to: a != b

    You can use these conditions to perform different actions for different decisions.

    C has the following conditional statements:

        * Use if to specify a block of code to be executed, if a specified condition is true
        * Use else to specify a block of code to be executed, if the same condition is false
        * Use else if to specify a new condition to test, if the first condition is false
        * Use switch to specify many alternative blocks of code to be executed
    */

    //////////////////////////////////////// THE IF STATEMENT /////////////////////////////////////////////

    // Use the if statement to specify a block of code to be executed if a condition is true:
    if (20 > 18)
    {
        printf("20 is greater than 18\n");
    }

    // we can also test variables:
    int x = 20;
    int y = 18;

    if (x > y)
    {
        printf("x is greater than y\n");
    }
    /*
    In the example above we use two variables, x and y, to test whether x is greater than y (using the > operator).
    As x is 20, and y is 18, and we know that 20 is greater than 18, we print to the screen that "x is greater than y".
    */

    ///////////////////////////////////// THE ELSE STATEMENT ////////////////////////////////////////////////////////////

    // Use the else statement to specify a block of code to be executed if the condition is false
    int time = 20;
    if (time < 18)
    {
        printf("Good day.");
    }
    else
    {
        printf("Good evening.");
    }
    // Output "Good everning"
    /*
    In the example above, time (20) is greater than 18, so the condition is false. Because of this, we move on to the else
    condition and print to the screen "Good evening". If the time was less than 18, the program would print "Good day".
    */

    ///////////////////////////////////////////////// ANOTHER EXAMPLE ///////////////////////////////////////////////////

    // This example shows how you can use if..else to find out if a number is positive or negative:
    int myNum = 10; // Is this a positive or negative number?

    if (myNum > 0)
    {
        printf("The value is a positive number.");
    }
    else if (myNum < 0)
    {
        printf("The value is a negative number.");
    }
    else
    {
        printf("The value is 0.");
    }

    return 0;
}

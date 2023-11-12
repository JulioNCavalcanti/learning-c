#include <stdio.h>

int main()
{
    ////////////////////////////////////// SWITCH STATEMENT ///////////////////////////////////////

    /*
    Instead of writing many if..else statements, you can use the switch statement.
    The switch statement selects one of many code blocks to be executed:

    Syntax:

        switch(expression) {
            case x:
                // code block
                break;
            case y:
                // code block
                break;
            default:
                // code block
        }

    -------------------------------------------------------------------------------------------------

    This is how it works:

        * The switch expression is evaluated once
        * The value of the expression is compared with the values of each case
        * If there is a match, the associated block of code is executed
        * The break statement breaks out of the switch block and stops the execution
        * The default statement is optional, and specifies some code to run if there is no case match

    The example below uses the weekday number to calculate the weekday name:
    */
    int day = 4;

    switch (day)
    {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;
    }
    // Outputs "Thursday" (day 4)

    ////////////////////////////////////////// THE BREAK KEYWORD ////////////////////////////////////

    /*
    When C reaches a break keyword, it breaks out of the switch block.

    This will stop the execution of more code and case testing inside the block.

    When a match is found, and the job is done, it's time for a break. There is no need for more testing.

    A break can save a lot of execution time because it "ignores" the execution of all the rest of the code in the switch block.
    */

    ///////////////////////////////////////// THE DEFAULT KEYWORD /////////////////////////////////////

    // The default keyword specifies some code to run if there is no case mach:
    // The default keyword must be used as the last statement in the switch, and it does not need a break.
    int day2 = 4;

    switch (day2)
    {
    case 6:
        printf("Today is Saturday\n");
        break;
    case 7:
        printf("Today is Sunday\n");
        break;
    default:
        printf("Looking forward to the Weekend\n");
    }
    // Outputs "Looking forward to the Weekend"

    return 0;
}
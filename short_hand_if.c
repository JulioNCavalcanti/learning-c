#include <stdio.h>

int main()
{
    /////////////////////////////////////////////////// SHORT HAND IF...ELSE (TERNARY OPERATOR) //////////////////////////////////

    /*
    There is also a short-hand if else, which is known as the ternary operator because it consists of three operands.
    It can be used to replace multiple lines of code with a single line. It is often used to replace simple if else statements:

    Syntax:

        variable = (condition) ? expressionTrue : expressionFalse;

    */

    // if and else:
    int time = 20;
    if (time < 18)
    {
        printf("Good day.\n");
    }
    else
    {
        printf("Good evening.\n");
    }

    // You can simply write:
    int time2 = 20;
    (time2 < 18) ? printf("Good day.\n") : printf("Good evening.\n");

    // It is completely up to you if you want to use the traditional if...else statement or the ternary operator.

    return 0;
}
#include <stdio.h>

int main()
{
    ////////////////////////////////////////////// CONSTANTS //////////////////////////////////

    /*
    If you don't want others (or yourself) to change existing variable values, you can use the const keyword.

    This will declare the variable as "constant", which means unchangeable and read-only:
    */
    const int myNum = 15;
    // myNum = 10; // error!

    // You should always declare the variable as constant when you have values that are unlikely to change:
    const int minutesPerHour = 60;
    const float PI = 3.14;

    ////////////////////////////////////// NOTES ON CONSTANTS

    // When you declare a constans variable, it must be with a value

    // Like this:
    const int secondsPerMinute = 60;

    // This however, will not work:
    const yearOfBirth;
    // yearOfBirth = 2005; // ERROR!

    /////////////////////////////// GOOD PRATICE ///////////////////////

    /*
    Another thing about constant variables, is that it is considered good practice to declare them with uppercase.
    It is not required, but useful for code readability and common for C programmers:
    */

    const int BIRTHYEAR = 2005;

    return 0;
}
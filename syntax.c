#include <stdio.h>

int main()
{
    printf("Hello World!");
    return 0;
}

/*
Line 1: #include <stdio.h> is a header file library that lets us work with input and output functions, such as printf() (used in line 5). 
        Header files add functionality to C program

Line 2: A blank line. C ignores white space. But we use it to make the code more readable.

Line 3: Another thing that always appear in a C program, is main(). This is called a function. 
        Any code inside its curly brackets {} will be executed.

Line 6: return 0 ends the main() function.

Line 7: Do not forget to add the closing curly bracket } to actually end the main function.

--------------------------------------------------------------------------------------------------------
|  Note that: Every C statement ends with a semicolon ;                                                |
|                                                                                                      |
|  Note: The body of int main() could also been written as:                                            |                                                                                                    |
|       int main(){printf("Hello World!");return 0;}                                                   | 
|                                                                                                      |
|  Remember: The compiler ignores white spaces. However, multiple lines makes the code more readable.  |
--------------------------------------------------------------------------------------------------------
*/
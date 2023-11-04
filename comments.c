/*
Comments can be used to explain code, and to make it more readable. It can also be used to prevent execution when testing alternative code.

Comments can be singled-lined or multi-lined.
*/

#include <stdio.h>

int main()
{
    /*
    Single-line comments start with two forward slashes (//).

    Any text between // and the end of the line is ignored by the compiler (will not be executed).

    This example uses a single-line comment before a line of code:
    */

    // This is a single-line comment
    printf("Hello World!\n");

    // Or

    printf("Hello World!\n"); // This is also a single-line comment

    printf("-------------------------------------\n");

    // Multi-line comments start with /* and end with */.

    // Any text between /* and */ will be ignored by the compiler:

    /*
    This is a multi-line comment
    */

    return 0;
}

/*
|Single or multi-line comments?
It is up to you which you want to use. Normally, we use // for short comments, and /* */
/*for longer.

Good to know: Before version C99 (released in 1999), you could only use multi-line comments in C.
*/

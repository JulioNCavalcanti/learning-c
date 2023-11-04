#include <stdio.h>

int main()
{
    // To insert a new line, you can use the \n character
    printf("Hello World!");
    printf("\n");

    // Or

    printf("Hello World!\n");

    // You can also output multiple lines with a single printf() function. However, this could make the code harder to read:
    printf("Hello World!\nI am learning C.\nAnd it is awesome!");

    // Tip: Two \n characters after each other will create a blank line:
    printf("Hello World!\n\n");
    printf("I'm learning C.");
    return 0;
}

/*
What is \n exactly?
The newline character (\n) is called an escape sequence, and it forces the cursor to change its position to the beginning of the next line on the screen. This results in a new line.

Examples of other valid escape sequences are:

/t - Creates a horizontal tab
\\ - Inserts a backslash character (\)
\" - Insert a double quote character
*/
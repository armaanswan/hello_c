/* Exercise 1-18: Write a program to remove trailing blanks and tabs
   from each line of input, and to delete entirely blank lines. */

#include <stdio.h>

int main()
{
    int c;
    int prev_char;

    while ((c = getchar()) != EOF)
    {
        prev_char = c;
        if (prev_char == ' ')
            ;
        printf("%c", c);
    }

    return 0;
}
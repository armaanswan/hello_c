// Exercise 1-9: Replacing one or more blanks with a single blank

#include <stdio.h>

int main()
{

    int c, nb;

    nb = 0; // Number of blanks

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            if (nb == 0)
            {
                putchar(' ');
                nb = 1;
            }
            /*
            No ELSE here because if c is a ' ' and nb is already 1,
            don't put down any char and skip to next char
            */
        }
        else
        {
            putchar(c);
            nb = 0;
        }
    }

    return 0;
}
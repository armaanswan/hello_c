// 1.2 - Variables and Arithmetic Expressions

#include <stdio.h> // Standard IO library

/* Convert Fahrenheit to Celcius (Integer) */

int main()
{
    // Variable declarations
    int fahr, celcius;
    int lower, upper, step;

    // Assignment Statements
    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    while (fahr <= upper)
    {
        celcius = 5 * (fahr - 32) / 9;
        // printf("%d\t%d\n", fahr, celcius);
        printf("%3d %6d\n", fahr, celcius);
        fahr = fahr + step;
    }

    return 0;
}

/*
In C, integer division turncates. That is, when an integer is divided by
another integer, the fractional part is discarded.
*/

/*
The printf() function prints the first argument provided to it.
Additional arguments can be provided after that.

'%d' is used where an integer needs to be substituted.
'%3d', '%6d' mean the integers should take up 3 and 6 spaces respectively.
*/
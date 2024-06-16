#include <stdio.h>

/* Convert Fahrenheit to Celcius (Float) */

int main()
{
    float fahr, celcius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    printf("Fahrenheit\tCelcius\n");
    while (fahr <= upper)
    {
        celcius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %13.1f\n", fahr, celcius);
        fahr = fahr + step;
    }

    return 0;
}

/*
The ratio of two floating-point values is not truncated.

For two operands:
Integer, Integer = Integer operation
Integer, Float = Float operation (Integer is converted into float)
Float, Float = Float operation
*/

/*
'%3.0f' = Float with no decimal and no fraction digits, 3 characters wide
'%6.1f' = Float with decimal and one fraction digit, 6 characters wide

'%f' = float (with 6 fraction digits?)
'%.f' = float with no decimal (no fraction digits)
'%.2f' = float with decimal and 2 fraction digits
'%20f' = float that is at least 20 characters long, with as many fraction digits (6 max?)
*/
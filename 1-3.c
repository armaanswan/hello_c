// 1.3 - The for Statement

#include <stdio.h>

// Convert Fahrenheit to Celcius using for-loop

int main()
{
    int fahr;

    for (fahr = 300; fahr >= 0; fahr = fahr - 20)
    {
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }

    return 0;
}
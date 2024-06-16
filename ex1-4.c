// Exercise 1-4: Celcius to Fahrenheit Table (with headings)

#include <stdio.h>

int main()
{
    float celcius, fahr;
    float lower, upper, step;

    lower = 0;
    upper = 100;
    step = 5;

    celcius = lower;

    printf("Celcius\tFahrenheit\n");
    while (celcius <= upper)
    {
        fahr = ((9.0 / 5.0) * celcius) + 32.0;
        printf("%3.f %10.1f\n", celcius, fahr);
        celcius = celcius + step;
    }

    return 0;
}
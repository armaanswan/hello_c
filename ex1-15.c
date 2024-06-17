// Exercise 1-15: Temperature Conversions using Functions

#include <stdio.h>

float fahrToCelc(float fahr);
float celcToFahr(float celc);

int main()
{
    printf("\nFahrenheit to Celcius:\n");
    printf("0 F = %.2f C\n", fahrToCelc(0));
    printf("32 F = %.2f C\n", fahrToCelc(32));
    printf("100 F = %.2f C\n", fahrToCelc(100));

    printf("\nCelcius to Fahrenheit:\n");
    printf("0 C = %.2f F\n", celcToFahr(0));
    printf("36.9 C = %.2f F\n", celcToFahr(36.9));
    printf("100 C = %.2f F\n", celcToFahr(100));
    return 0;
}

// Returns given Fahrenheit temperature as Celcius.
float fahrToCelc(float fahr)
{
    return (5.0 / 9.0) * (fahr - 32.0);
}

// Returns given Celcius temperature as Fahrenheit.
float celcToFahr(float celc)
{
    return ((9.0 / 5.0) * celc) + 32.0;
}
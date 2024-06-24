// 1.8 - Arguments (call by value)

#include <stdio.h>

int power(int base, int n);

int main()
{
    printf("7 raised to the power of 4 is: %d", power(7, 4));
    return 0;
}

int power(int base, int n)
{
    int p;

    for (p = 1; n > 0; --n) // the original value of 'n' is not changed since it is passed by value and not by reference
        p = p * base;

    return p;
}

// Array are always passed by reference
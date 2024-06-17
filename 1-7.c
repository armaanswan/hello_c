// 1.7 - Functions

#include <stdio.h>

// Function Prototype
int power(int base, int n);
// int power(int, int);

int main()
{
    printf("2^4 = %d\n8^3 = %d", power(2, 4), power(8, 3));
    return 0;
}

// Function
int power(int base, int n)
{

    int i, p;

    p = 1;

    for (i = 1; i <= n; ++i)
        p = p * base;

    return p;
}

/* Alternate version of power function. */
// int power(int base, int n)
// {
//     int p;

//     for (p = 1; n > 0; --n)
//         p = p * base;

//     return p;
// }
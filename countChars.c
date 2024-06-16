#include <stdio.h>

// Counting the number of characters

/*
int
- 16 bit or 2 bytes (older systems)
- 32 bit or 4 bytes (newer systems)

printf("Size of unsigned int: %lu bytes", sizeof(int));
*/

/*
long
- 32 or 64 bit

printf("Size of long: %lu bytes", sizeof(long));
*/

int main()
{
    // -- Using while-loop --

    // long nc;
    // nc = 0;
    // while (getchar() != EOF)
    // {
    //     ++nc;
    // }

    // printf("\nTotal characters: %ld\n", nc);

    // -- Using empty for-loop
    double nc;
    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("\nTotal characters: %.0f\n", nc);

    return 0;
}
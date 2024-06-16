// Exercise 1-14: Histogram of frequencies of different characters in input

#include <stdio.h>

#define MAX_CHAR 256 // Number of possible character values

int main()
{
    int c, i, j;
    int char_count[MAX_CHAR] = {0}; // Array to store the count of each character

    // Read characters from input and count their frequencies
    while ((c = getchar()) != EOF)
    {
        ++char_count[c];
    }

    // Print the histogram
    printf("Character Frequency Histogram:\n");

    for (i = 0; i < MAX_CHAR; ++i)
    {
        if (char_count[i] > 0)
        {
            if (i >= 32 && i <= 126)
                printf("%c: ", i); // Printable characters
            else
                printf("%3d: ", i); // Non-printable characters as decimal

            for (j = 0; j < char_count[i]; ++j)
            {
                printf("#");
            }
            printf("\n");
        }
    }

    return 0;
}
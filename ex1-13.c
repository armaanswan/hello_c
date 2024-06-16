// Exercise 1-13: Histogram of length of words in input

#include <stdio.h>

#define MAX_WORD_LENGTH 20 // Define the maximum word length we are interested in
#define IN 1               // Inside a word
#define OUT 0              // Outside a word

int main()
{
    int c, i, j, length;
    int word_lengths[MAX_WORD_LENGTH + 1]; // Array to store word lengths
    int state = OUT;

    // Initialize the word_lengths array
    for (i = 0; i < MAX_WORD_LENGTH + 1; ++i)
    {
        word_lengths[i] = 0;
    }

    length = 0; // Length of the current word

    // Read characters from input
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            if (state == IN)
            {
                state = OUT;
                if (length <= MAX_WORD_LENGTH)
                {
                    ++word_lengths[length];
                }
                else
                {
                    ++word_lengths[MAX_WORD_LENGTH]; // Count as max length if it exceeds
                }
                length = 0; // Reset word length
            }
        }
        else
        {
            state = IN;
            ++length; // Increment length of current word
        }
    }

    // Print the histogram
    printf("\n\nWord Lengths Histogram:\n");

    for (i = 1; i <= MAX_WORD_LENGTH; ++i)
    {
        printf("%2d: ", i);
        for (j = 0; j < word_lengths[i]; ++j)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
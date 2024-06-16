// 1.5.4 - Word Counting

#include <stdio.h>

// Counting the number of characters, words, and lines similar to the 'wc' command.

#define IN 1  // inside a word
#define OUT 0 // outside a word

int main()
{
    int c, nc, nw, nl, state;

    state = OUT;
    nc = nw = nl = 0;

    while ((c = getchar()) != EOF)
    {
        ++nc;

        if (c == '\n')
            ++nl;

        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT)
        {
            state = IN;
            ++nw;
        }
    }

    printf("\nNumber of characters: %d\nNumber of lines: %d\nNumber of words: %d\n", nc, nl, nw);

    return 0;
}
// 1.5.3 - Line Counting

#include <stdio.h>

int main()
{

    int c, nl, nb, nt;

    nl = 0; // lines
    nb = 0; // blanks
    nt = 0; // tabs

    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
            ++nl;

        if (c == ' ')
            ++nb;

        if (c == '\t')
            ++nt;
    }

    printf("\nNo. of lines: %d\n", nl);
    printf("No. of blanks: %d\n", nb);
    printf("No. of tabs: %d\n", nt);

    return 0;
}
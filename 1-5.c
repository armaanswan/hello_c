// 1.5 - Character Input and Output

#include <stdio.h>

// Overview of getchar() and putchar() in C.

/* To run the program, type in terminal:
// gcc charInputOutput.c -o charInputOutput
// ./charInputOutput
*/

int main()
{

    int c;
    // We use 'int' and not 'char' because
    // EOF returns a value that is bigger than what 'char' can store

    c = getchar();

    while (c != EOF) // EOF (end of file) is an integer defined in <stdio.h>.
    {
        putchar(c);
        // printf("\ngetchar() != EOF is: %d\n", (getchar() != EOF));
        // printf("\nEOF is: %d\n", EOF);
        c = getchar();
    }

    return 0;
}

/*
int c;

while ((c = getchar()) != EOF) {
    putchar(c);
}

is another shorter version
*/

/* getchar() != EOF is either 0 or 1 */
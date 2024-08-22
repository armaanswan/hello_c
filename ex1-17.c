// Exercise 1-17: Write a program to print all input lines that are longer than 80 characters.

#include <stdio.h>
#define MAX_LINE_LENGTH 1000
#define PRINT_LENGTH 80

int my_getline(char line[], int max);

int main()
{
    int i;
    int len;
    char line[MAX_LINE_LENGTH];

    while ((len = my_getline(line, MAX_LINE_LENGTH)) > 0)
    {
        if (len > PRINT_LENGTH)
            printf("%s", line);
    }

    return 0;
}

int my_getline(char line[], int max)
{

    int i;
    int c;

    for (i = 0; i < max - 1 && (c = getchar()) != EOF && c != '\n'; i++)
        line[i] = c;

    if (c == '\n')
    {
        line[i] = c;
        ++i;
    }

    line[i] = '\0';

    return i;
}
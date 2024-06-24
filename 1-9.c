// 1.9 - Character Arrays

/* Basic Code Logic
while (there's another line)
    if (it's longer than the previous longest)
        (save it)
        (save its length)

print longest line
*/

#include <stdio.h>
#define MAX_LINE_LENGTH 1000

int my_getline(char line[], int max_length);
void my_copy(char longest_line[], char line[]);

int main()
{
    int len;                        // Length of current line
    int max;                        // Length of longest line so far
    char line[MAX_LINE_LENGTH];     // current line
    char max_line[MAX_LINE_LENGTH]; // line of max length

    max = 0;
    while ((len = my_getline(line, MAX_LINE_LENGTH)) > 0)
        if (len > max)
        {
            max = len;
            my_copy(max_line, line);
        }
    if (max > 0)
        printf("%s", max_line);
    return 0;
}

// Takes a line and returns its length
int my_getline(char line[], int max_length)
{
    int i;
    int c;

    for (i = 0; i < max_length - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if (c == '\n')
    {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

// Copy the given line to the longest-line array
void my_copy(char longest_line[], char line[])
{

    int i;

    i = 0;
    while ((longest_line[i] = line[i]) != '\0')
        ++i;
}
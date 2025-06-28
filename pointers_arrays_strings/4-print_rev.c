#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: the string to print
 */
void print_rev(char *s)
{
    int i = 0;

    /* First, find the length of the string */
    while (s[i] != '\0')
        i--;

    /* Then print characters in reverse order */
    while (i >= 0)
    {
        _putchar(s[i]);
        i--;
    }

    _putchar('\n');
}

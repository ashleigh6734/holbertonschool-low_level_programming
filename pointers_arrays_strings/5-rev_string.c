#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to the string to be reversed
 */
void rev_string(char *s)
{
    int start = 0;
    int end = 0;
    char temp;

    /* Find the length to get the last index */
    while (s[end] != '\0')
        end++;

    end--; /* Point to last valid character */

    while (start < end)
    {
        /* Swap characters at start and end */
        temp = s[start];
        s[start] = s[end];
        s[end] = temp;

        start++;
        end--;
    }
}

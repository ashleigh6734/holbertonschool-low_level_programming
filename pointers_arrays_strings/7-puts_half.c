#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: the string to process
 */
void puts_half(char *str)
{
    int len = 0;
    int start;
    
    /* Find string length */
    while (str[len] != '\0')
        len++;

    /* Calculate starting index for second half */
    if (len % 2 == 0)
        start = len / 2;
    else
        start = (len + 1) / 2;

    /* Print from start to end */
    while (str[start] != '\0')
    {
        _putchar(str[start]);
        start++;
    }
    _putchar('\n');
}

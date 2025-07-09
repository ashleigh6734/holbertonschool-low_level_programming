#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

char *_strdup(char *str)
{
    char *dup;
    unsigned int i, len;

    if (str == NULL)
        return (NULL);

    /* Get the length of the input string */
    len = 0;
    while (str[len] != '\0')
        len++;

    /* Allocate memory for duplicate string (+1 for null terminator) */
    dup = malloc((len + 1) * sizeof(char));
    if (dup == NULL)
        return (NULL);

    /* Copy characters */
    for (i = 0; i < len; i++)
        dup[i] = str[i];

    /* Add null terminator */
    dup[len] = '\0';

    return (dup);
}

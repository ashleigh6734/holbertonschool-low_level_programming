#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to scan
 * @accept: the string containing the accepted characters
 *
 * Return: number of bytes in the initial segment of s
 *         consisting only of characters from accept
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int i, j;

    for (i = 0; s[i]; i++)
    {
        int found = 0;

        for (j = 0; accept[j]; j++)
        {
            if (s[i] == accept[j])
            {
                found = 1;
                break;
            }
        }

        if (!found)
            break;
    }

    return (i);
}

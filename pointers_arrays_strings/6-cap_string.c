#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *cap_string(char *s)
{
    int i = 0, j;
    char sep[] = " \t\n,;.!?\"(){}";

    while (s[i])
    {
        /* Capitalize first letter if it's a lowercase letter */
        if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
            s[i] -= 32;

        /* Check for separator before lowercase letter */
        for (j = 0; sep[j] != '\0'; j++)
        {
            if (s[i] == sep[j] && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
            {
                s[i + 1] -= 32;
                break;
            }
        }
        i++;
    }

    return (s);
}

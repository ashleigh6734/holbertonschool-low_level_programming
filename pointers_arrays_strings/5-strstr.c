#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the string to search
 * @needle: the substring to locate
 *
 * Return: pointer to the beginning of the located substring,
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
    int i;

    if (*needle == '\0')
        return (haystack);

    while (*haystack)
    {
        for (i = 0; needle[i]; i++)
        {
            if (haystack[i] != needle[i])
                break;
        }

        if (!needle[i])
            return (haystack);

        haystack++;
    }

    return (0);
}

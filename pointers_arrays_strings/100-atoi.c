#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the converted integer value
 */
int _atoi(char *s)
{
    int i = 0, sign = 1, result = 0, number_started = 0;

    while (s[i] != '\0')
    {
        if (s[i] == '-')
            sign *= -1;
        else if (s[i] >= '0' && s[i] <= '9')
        {
            number_started = 1;
            result = result * 10 + (s[i] - '0');
        }
        else if (number_started)
            break;
        i++;
    }

    return (sign * result);
}

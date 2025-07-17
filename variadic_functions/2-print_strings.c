#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings followed by a separator and newline
 * @separator: string to print between strings
 * @n: number of strings
 *
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list args;
    unsigned int i;
    char *str;

    va_start(args, n);

    i = 0;
    while (i < n)
    {
        str = va_arg(args, char *);
        if (str == NULL)
            printf("(nil)");
        else
            printf("%s", str);

        if (separator != NULL && i < n - 1)
            printf("%s", separator);

        i++;
    }

    va_end(args);
    printf("\n");
}

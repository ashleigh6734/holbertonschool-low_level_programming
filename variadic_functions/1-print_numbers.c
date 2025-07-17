#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by a separator and newline
 * @separator: string to print between numbers
 * @n: number of arguments
 *
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list args;
    unsigned int i;

    va_start(args, n);

    i = 0;
    while (i < n)
    {
        printf("%d", va_arg(args, int));

        if (separator != NULL && i < n - 1)
            printf("%s", separator);

        i++;
    }

    va_end(args);
    printf("\n");
}

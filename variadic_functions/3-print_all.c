#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything based on format string
 * @format: list of argument types
 */
void print_all(const char * const format, ...)
{
    va_list args;
    unsigned int i = 0;
    char *str;
    char *sep;
    char format_char;
    int int_arg;
    float float_arg;
    char char_arg;

    va_start(args, format);
    sep = "";

    while (format != NULL && format[i] != '\0')
    {
        format_char = format[i];

        if (format_char == 'c' || format_char == 'i' || format_char == 'f' || format_char == 's')
        {
            printf("%s", sep);

            if (format_char == 'c')
            {
                char_arg = va_arg(args, int);
                printf("%c", char_arg);
            }

            if (format_char == 'i')
            {
                int_arg = va_arg(args, int);
                printf("%d", int_arg);
            }

            if (format_char == 'f')
            {
                float_arg = (float)va_arg(args, double);
                printf("%f", float_arg);
            }

            if (format_char == 's')
            {
                str = va_arg(args, char *);
                if (str == NULL)
                    str = "(nil)";
                printf("%s", str);
            }

            sep = ", ";
        }

        i++;
    }

    va_end(args);
    printf("\n");

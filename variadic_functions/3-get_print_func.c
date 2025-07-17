#include <stdarg.h>
#include "variadic_functions.h"

/**
 * get_print_func - selects correct print function for format specifier
 * @format: format character
 *
 * Return: pointer to printing function, or NULL if not found
 */

void (*get_print_func(char format))(va_list)
{
    printer_t printers[] = {
        {"c", print_char},
        {"i", print_int},
        {"f", print_float},
        {"s", print_string},
        {NULL, NULL}
    };

    int i = 0;

    while (printers[i].symbol != NULL)
    {
        if (format == printers[i].symbol[0])
            return (printers[i].print);
        i++;
    }

    return (NULL);
}

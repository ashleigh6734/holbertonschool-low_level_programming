#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return 0;

	va_start(args, n);

	i = 0;
	while (i < n)
	{
		sum += va_arg(args, int);
		i++;
	}
	va_end(args);

	return (sum);
}

#include "main.h"

/**
 * main - check the code
 * description: printing a new line
 * Return: 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

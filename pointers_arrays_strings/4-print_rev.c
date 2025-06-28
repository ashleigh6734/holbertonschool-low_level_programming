#include "main.h"

/**
 * main - check the code
 * description - reverse string
 * Return: 0
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[1] != '\0')
		i--;

	while (i >= 0)
	{
		_putchar(s[1]);
		i--;
	}
	_putchar('\n');
}

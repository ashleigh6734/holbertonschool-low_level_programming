#include "main.h"

/**
 * main - entry point
 * description - print alphabet
 * Return: 0 Always success
 */

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
		_putchar(ch++);

	_putchar('\n');
}

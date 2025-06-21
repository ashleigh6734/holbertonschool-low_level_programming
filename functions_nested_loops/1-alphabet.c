#include "main.h"

/**
 * main - entry point
 *
 * Return: 0 Always success
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
		_putchar(ch++);

	_putchar('\n');

	return (0);
}

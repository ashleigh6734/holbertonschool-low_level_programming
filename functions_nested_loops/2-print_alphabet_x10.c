#include "main.h"

/**
 * main - entry point
 * description 
 * Return: 0 always success
 */

void print_alphabet_x10(void)
{ int line = 0;
	char ch;

	while (line < 10)
	{
		ch = 'a';
		while (ch <= 'z')
			_putchar(ch++);
		_putchar('\n');
		line++;
	}
}

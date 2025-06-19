#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet excluding 'q' and 'e'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}

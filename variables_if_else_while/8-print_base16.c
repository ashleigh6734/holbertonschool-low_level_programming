#include <stdio.h>

/**
 * main - description
 * Return: 0
 */
int main(void)
{
	int n;

	n = 0;

	while (n <= 9)
	{
		putchar('0' + n);
		n++;
	}
	while (n <= 15)
	{
		putchar('n' + (n - 10));
		n++;
	}
	putchar('\n');

	return (0);
}

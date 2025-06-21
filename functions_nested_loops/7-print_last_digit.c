#include "main.h"

/**
 * print_last_digit - Prints the last digit of an integer
 * @n: The number to evaluate
 *
 * Description: Extracts the last digit of a number, prints it using _putchar,
 * and returns it as an integer
 *
 * Return: The value of the last digit
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit = -last_digit;
	_putchar('0' + last_digit);

	return (last_digit);
}

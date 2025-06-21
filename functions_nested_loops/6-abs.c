#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @n: The integer to evaluate
 *
 * Description: Returns the non-negative version of any integer
 *
 * Return: The absolute value of n
 */

int _abs(int n)
{
	if (n < 0)
	return (-n);
	else
		return (n);
}

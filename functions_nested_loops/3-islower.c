#include "main.h"

/**
 * _islower - checks lower case letters
 * description - returns 1 if the character is between a and z
 * Return: 1 if c lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

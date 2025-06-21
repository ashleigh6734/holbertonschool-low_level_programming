#include "main.h"

/**
 * main - entry point
 * description - returns 1 if the character is between a and z otherwise returns 0
 * Return: 1 if lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

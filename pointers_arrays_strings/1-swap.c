#include "main.h"
/**
 * main - entry point
 * description - swap
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int new = *a;

	*a = *b;
	*b = new;
}

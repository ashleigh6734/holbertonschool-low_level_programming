#include <stdio.h>
#include "function_pointers.h"
#include <stddef.h>
/**
 * print_elem - prints an integer
 * @elem: the integer to print
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	for (size_t i = 0; i < size; i++)
		action(array[i]);
}

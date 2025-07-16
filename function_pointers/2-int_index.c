#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * int_index - searches for an integer that satisfies a comparison function
 * @array: the array to search
 * @size: number of elements in the array
 * @cmp: pointer to function used to compare values
 *
 * Return: index of the first matching element, or -1 if none or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int result;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	while (i < size)
	{
		result = cmp(array[i]);
		if (result != 0)
			return (i);
		i++;
	}
	return (-1);
}

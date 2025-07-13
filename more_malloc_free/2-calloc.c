#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *ptr;

	/* invalid value for nmemb or size */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* allocate memory and initialise it to 0 */
	ptr = malloc(nmemb * size);
	while (i < (nmemb * size) && ptr != NULL)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

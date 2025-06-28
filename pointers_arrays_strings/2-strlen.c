#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * main - entry point
 * description - string length
 * return: len 
 */

int _strlen(char *s)
{
	int len = 0;
	
	while (s[len] != '\0')
		len++;
	return (len);
}

#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The starting number
 *
 * Description: Numbers are printed in order, separated by a comma
 * and space. Handles both ascending and descending from n to 98.
 *
 * Return: void
 */
void print_to_98(int n)
{
    if (n <= 98)
    {
        while (n <= 98)
        {
            printf("%d", n);
            if (n != 98)
                printf(", ");
            n++;
        }
    }
    else
    {
        while (n >= 98)
        {
            printf("%d", n);
            if (n != 98)
                printf(", ");
            n--;
        }
    }
    printf("\n");
}

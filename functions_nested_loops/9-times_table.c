#include "main.h"

/**
 * times_table - Prints the 9 times table starting from 0
 *
 * Description: Displays a 10x10 multiplication table where each row
 * represents a multiplier from 0–9. Values are aligned using spaces.
 *
 * Return: void
 */
void times_table(void)
{
    int row, col, prod;

    for (row = 0; row <= 9; row++)
    {
        for (col = 0; col <= 9; col++)
        {
            prod = row * col;

            if (col == 0)
                _putchar('0');
            else
            {
                _putchar(',');
                _putchar(' ');
                if (prod < 10)
                    _putchar(' ');
                else
                    _putchar(prod / 10 + '0');
                _putchar(prod % 10 + '0');
            }
        }
        _putchar('\n');
    }
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet using only two putchar calls
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char ch = 'a';

    while (ch <= 'z')
    {
        putchar(ch);
        ch++;
    }
    putchar('\n');

    return (0);
}

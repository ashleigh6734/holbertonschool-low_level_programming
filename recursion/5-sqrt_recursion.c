#include "main.h"

/**
 * _sqrt_helper - recursive helper to find square root
 * @n: number we're finding the square root of
 * @i: current guess
 *
 * Return: natural square root or -1 if not found
 */
int _sqrt_helper(int n, int i)
{
    if (i * i > n)
        return (-1);
    if (i * i == n)
        return (i);
    return (_sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find the square root of
 *
 * Return: square root or -1 if no natural square root
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return (-1);
    return (_sqrt_helper(n, 0));
}

#include "main.h"

/**
 * _is_prime - helper function to check for prime recursively
 * @n: number to check
 * @i: current divisor
 *
 * Return: 1 if prime, 0 otherwise
 */
int _is_prime(int n, int i)
{
    if (i * i > n)
        return (1);
    if (n % i == 0)
        return (0);
    return (_is_prime(n, i + 1));
}

/**
 * is_prime_number - checks if a number is a prime
 * @n: input integer
 *
 * Return: 1 if n is prime, 0 if not
 */
int is_prime_number(int n)
{
    if (n <= 1)
        return (0);
    return (_is_prime(n, 2));
}

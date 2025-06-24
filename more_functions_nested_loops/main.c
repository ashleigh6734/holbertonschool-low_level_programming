#include <stdio.h>
#include "main.h"

int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c)); // Expected output: A: 1

    c = 'a';
    printf("%c: %d\n", c, _isupper(c)); // Expected output: a: 0

    return (0);
}

#include <stdio.h>
#include "main.h"

int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));

    c = 'a';
    printf("%c: %d\n", c, _isupper(c));

    return (0);
}

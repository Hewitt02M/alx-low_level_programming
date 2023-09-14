#include "main.h"

/**
 * print_square - Prints a squareusing the character #.
 * @size: The size of the square.
 */
void print_square(int size)
{
int p, f;

if (size > 0)
{
for (p = 0; p < size; p++)
{
for (f = 0; f < size; f++)
_putchar('#');

if (p == size - 1)
continue;
_putchar('\n');
}
}

_putchar('\n');
}

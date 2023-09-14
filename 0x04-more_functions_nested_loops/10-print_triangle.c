#include "main.h"

/**
 * print_triangle - Prints a triangle, using the character #.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
int ak, ex;

if (size > 0)
{
for (ak = 1; ak <= size; ak++)
{
for (ex = size - ak; ex > 0; ex--)
_putchar(' ');

for (ex = 0; ex < ak; ex++)
_putchar('#');

if (ak == size)
continue;

_putchar('\n');
}
}

_putchar('\n');
}

#include "main.h"

/**
 * print_diagonal - Draws a diagonal line using the \ character.
 * @n: The number of \ characters to be printed.
 */
void print_diagonal(int n)
{
int pn, ln;

if (n > 0)
{
for (pn = 0; pn < n; pn++)
{
for (ln = 0; ln < pn; ln++)
_putchar(' ');
_putchar('\\');

if (pn == n - 1)
continue;

_putchar('\n');
}
}

	_putchar('\n');
}

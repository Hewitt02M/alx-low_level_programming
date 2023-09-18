#include "main.h"

/**
 *  * puts_half - Prints half of a string.
 *   * @str: The string to be printed.
 */
void puts_half(char *str)
{
	int d = 0, len = 0, n;

	while (str[d++])
		len++;

	if ((len % 2) == 0)
		n = len / 2;

	else
		n = (len + 1) / 2;

	for (d = n; d < len; d++)
		_putchar(str[d]);

	_putchar('\n');
}

#include "main.h"

/**
 *  * puts2 - prints every other character of a string.
 *   *@str: the string to use.
 */

void puts2(char *str)
{
	int in = 0;

	while (str[in] != '\0')
	{
		if (in % 2 == 0)
		{
			_putchar(str[in]);
		}
		in++;
	}
	_putchar('\n');
}

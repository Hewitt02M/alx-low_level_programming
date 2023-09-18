#include "main.h"
#include <stdio.h>

/**
 *  * print_array - Prints an inputted number of elements
 *   *               of an array of integers.
 *    * @a: The array of integers.
 *     * @n: The number of elements to be printed.
 */
void print_array(int *a, int n)
{
	int in;

	for (in = 0; in < n; in++)
	{
		printf("%d", a[in]);

		if (in == n - 1)
						continue;

		printf(", ");
	}

	printf("\n");
}

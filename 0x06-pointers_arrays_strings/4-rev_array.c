#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 */
void reverse_array(int *a, int n)
{
int tmp, z;

for (z = n - 1; z >= n / 2; z--)
{
tmp = a[n - 1 - z];
a[n - 1 - z] = a[z];
a[z] = tmp;
}
}

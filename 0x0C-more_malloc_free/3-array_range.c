#include "main.h"
#include <stdlib.h>

/**
 * array_range - Function create and array of integers.
 * @min: starting number.
 * @max: ending number.
 *
 * Return: pointer to the area in memory.
 */
int *array_range(int min, int max)
{
int *ak117;
int num;

if (min > max)
return (NULL);
num = max - min;

ak117 = malloc(sizeof(int) * (num + 1));
if (!ak117)
return (NULL);
while (max > min)
{
ak117[num] = max;
num--;
max--;
}
ak117[num] = min;
return (ak117);
}

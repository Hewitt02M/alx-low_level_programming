#include "function_pointers.h"

/**
 * array_iterator - Executes a function given.
 * @array: The array.
 * @size: The size of array.
 * @action: pointer to be executed.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array == NULL || action == NULL)
return;

while (size--)
action(*array++);
}

#include <stdlib.h>

/**
 * malloc_checked - fuction allocates memory
 * @b: size of memory to allocate.
 *
 * Return: pointer to memory, Else if return exit status 98.
 */
void *malloc_checked(unsigned int b)
{
void *ak117;
ak117 = malloc(b);
if (ak117 == NULL)
{
free(ak117);
exit(98);
}
return (ak117);
}

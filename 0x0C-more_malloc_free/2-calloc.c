#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of a certain number.
 * @nmemb: The number of elements.
 * @size: The byte size of each array element.
 *
 * Return: If nmemb = 0, size = 0, or the function fails - NULL.
 *         Otherwise - a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *num;
char *ber;
unsigned int ak117;

if (nmemb == 0 || size == 0)
return (NULL);

num = malloc(size * nmemb);

if (num == NULL)
return (NULL);

ber = num;

for (ak117 = 0; ak117 < (size * nmemb); ak117++)
ber[ak117] = '\0';

return (num);
}

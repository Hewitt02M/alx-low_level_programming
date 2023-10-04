#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 * @str: The string to be copied.
 *
 * Return: If str == NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
char *duplicate;
int nz, i = 0;

if (str == NULL)
return (NULL);

for (nz = 0; str[nz]; nz++)
i++;

duplicate = malloc(sizeof(char) * (i + 1));

if (duplicate == NULL)
return (NULL);

for (nz = 0; str[nz]; nz++)
duplicate[nz] = str[nz];

duplicate[i] = '\0';

return (duplicate);
}

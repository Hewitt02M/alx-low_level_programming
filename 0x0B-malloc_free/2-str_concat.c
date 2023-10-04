#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The string to be concatenated upon.
 * @s2: The string to be concatenated to s1.
 *
 * Return: If concatenation fails - NULL.
 *         Otherwise - a pointer the newly-allocated space in memory
 *                     containing the concatenated strings.
 */
char *str_concat(char *s1, char *s2)
{
char *concat_str;
int nz, q = 0, i = 0;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

for (nz = 0; s1[nz] || s2[nz]; nz++)
i++;

concat_str = malloc(sizeof(char) * i);

if (concat_str == NULL)
return (NULL);

for (nz = 0; s1[nz]; nz++)
concat_str[q++] = s1[nz];

for (nz = 0; s2[nz]; nz++)
concat_str[q++] = s2[nz];

return (concat_str);
}

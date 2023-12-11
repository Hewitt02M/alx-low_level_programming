#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @src: input value
 * @dest: input value
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
int z = 0, n = 0;

while (dest[z++])
n++;

for (z = 0; src[z]; z++)
dest[n++] = src[z];

return (dest);
}

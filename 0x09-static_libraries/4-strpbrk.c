#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: haystack.
 * @accept: needle.
 *
 * Return: pointer to to byte s that matches one of the byes in accept, or NUL
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int tx, z;

tx = 0;
z = 0;
while (s[tx] != '\0')
{
z = 0;
while (accept[z] != '\0')
{
if (s[tx] == accept[z])
return ((s + tx));
z++;
}
tx++;
}
return (NULL);
}

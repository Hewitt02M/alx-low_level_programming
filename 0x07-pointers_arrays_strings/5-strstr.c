#include "main.h"
#include <stdio.h>

/**
 * _strstr - function that locates a substring.
 * @haystack: source string to search through.
 * @needle: string to search for.
 *
 * Return: return beginning of located substring or NULL.
 */
char *_strstr(char *haystack, char *needle)
{
unsigned int tx, z, c;

tx = 0;
z = 0;
c = 0;
while (haystack[tx] != '\0')
{
if (needle[z] == haystack[tx])
{
c = 1;
z++;

}
else
{
c = 0;
z = 0;
}

if (needle[z] == '\0' && c == 1)
return ((haystack + tx - z + 1));
else if (needle[z] == '\0' && c == 0)
return (haystack);
tx++;
}

return (NULL);
}

#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - fuction that concats two strings.
 * @s1: base sting to concat to. `Null` will return as empty.
 * @s2: string to copy from. 'NULL' will return as empty string.
 * @n: amount of s2 to copy.
 * Return: pointer to allocated memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *stn;
unsigned int ak117, nz, num;

nz = num = 0;
if (s1)
for (; s1[nz]; nz++)
;
if (s2)
for (; s2[num]; num++)
;
if (!(n >= num))
num = n;

stn = malloc(sizeof(char) * (nz + num) +1);
if (!stn)
return (NULL);

for (ak117 = 0; ak117 < (nz + num); ak117++)
{
if (ak117 < nz)
stn[ak117] = s1[ak117];
else
stn[ak117] = s2[ak117 - nz];
}

stn[ak117] = '\0';

return (stn);
}

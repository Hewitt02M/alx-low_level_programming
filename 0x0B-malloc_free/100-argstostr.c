#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments
 * @ac: args count.
 * @av: arguments
 * Return: pointer to string.
 */
char *argstostr(int ac, char **av)
{
char *str, *temp;
int nz, z, ts;

if (ac == 0 || av == NULL)
	return (NULL);
ts = 0;
for (nz = 0; nz < ac; nz++)
{
temp = *(av + nz);
for (z = 0; temp[z]; z++)
{
ts++;
}
ts += 1;
}
str = malloc(sizeof(char) * ts + 1);
ts = 0;
for (nz = 0; nz < ac; nz++)
{
temp = *(av + nz);
for (z = 0; temp[z]; ++z)
{
str[ts] = temp[z];
ts++;
}
str[ts] = '\n';
ts++;
}
str[ts] = '\0';
return (str);
}

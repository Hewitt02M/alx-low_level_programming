#include "dog.h"
#include <stdlib.h>

/**
 * _strcopy - copy read only data to mutatable.
 * @dst: pointer to copy char to.
 * @src: read only data.
 */
void _strcopy(char *dst, char *src)
{
int fi;

for (fi = 0; src[fi]; fi++)
dst[fi] = src[fi];
dst[fi] = '\0';
}

/**
 * new_dog - create new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *gshrpd;
int nz, b;

for (nz = 0; name[nz]; nz++)
		;
for (b = 0; owner[b]; b++)
		;

gshrpd = malloc(sizeof(dog_t));
if (!gshrpd)
return (NULL);

gshrpd->name = malloc(nz + 1);
if (!gshrpd->name)
{
free(gshrpd);
return (NULL);
}

gshrpd->owner = malloc(b + 1);
if (!gshrpd->owner)
{
free(gshrpd->name);
free(gshrpd);
return (NULL);
}

_strcopy(gshrpd->name, name);
_strcopy(gshrpd->owner, owner);
gshrpd->age = age;
return (gshrpd);
}

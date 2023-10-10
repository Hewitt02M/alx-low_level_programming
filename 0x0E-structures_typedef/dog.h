#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - info on dog.
 * @name: dog's name.
 * @age: age of the dog in float.
 * @owner: name of the owner of the dog.
 */
struct dog
{
char *name;
float age;
char *owner;
};
/* function for typedef gsherpd */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog gsherpd;
gsherpd *new_dog(char *name, float age, char *owner);
void free_dog(gsherpd *d);
#endif

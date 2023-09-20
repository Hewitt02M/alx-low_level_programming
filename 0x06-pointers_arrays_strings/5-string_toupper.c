#include "main.h"

/**
 * string_toupper - Changes all lowercase letters
 *                  of a string to uppercase.
 * @str: The string to be changed.
 *
 * Return: A pointer to the changed string.
 */
char *string_toupper(char *str)
{
int s = 0;

while (str[s])
{
if (str[s] >= 'a' && str[s] <= 'z')
str[s] -= 32;

s++;
}

return (str);
}

#include "main.h"

/**
 * leet - Encodes a string to 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
int s1 = 0, s2;
char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

while (str[s1])
{
for (s2 = 0; s2 <= 7; s2++)
{
if (str[s1] == leet[s2] ||
str[s1] - 32 == leet[s2])
str[s1] = s2 + '0';
}

s1++;
}

return (str);
}

#include "main.h"

/**
 *   * _strlen - return the lenth of the string as an int value
 *     * @s: the string to measure.
 *       *
 *         * Return: Int value of the lenth.
 */
int _strlen(char *s)
{
int t = 0;

while (*(s + t) != '\0')
{
t++;
}
return (t);
}

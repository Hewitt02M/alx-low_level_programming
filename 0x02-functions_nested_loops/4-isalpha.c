 #include "main.h"
/**
 *_isalpha - check if the given character is lower case.
 * @c: character to test.
 *
 * Return: 1 if character is letter, lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
return (0);
}

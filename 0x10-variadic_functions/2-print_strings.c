#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print given string
 * @separator: separator to print with if Null don't print any separators.
 * @n: number of arguments to print.
 * @...: string to print.
 *
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list strings;
char *str;
unsigned int nz;

va_start(strings, n);

for (nz = 0; nz < n; nz++)
{
str = va_arg(strings, char *);

if (str == NULL)
printf("(nil)");
else
printf("%s", str);

if (nz != (n - 1) && separator != NULL)
printf("%s", separator);
}

printf("\n");

va_end(strings);
}

#include "main.h"

/**
 * print_alphabet_x10 - write the the lower-case alphabet on a line.
 *
 */
void print_alphabet_x10(void)
{
char ns;
int k;

for (k = 0; k < 10 ; k++)
{
for (ns = 'a' ; ns <= 'z' ; ns++)
{
_putchar(ns);
}
_putchar('\n');
}
}

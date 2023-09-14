#include <stdio.h>

/**
 * main - Finds and prints the largest prime
 *        factor of the number 612852475143.
 *
 * Return: Always 0.
 */
int main(void)
{
long prime = 612852475143, in;

while (in < (prime / 2))
{
if ((prime % 2) == 0)
{
prime /= 2;
continue;
}

for (in = 3; in < (prime / 2); in += 2)
{
if ((prime % in) == 0)
prime /= in;
}
}

printf("%ld\n", prime);

return (0);
}

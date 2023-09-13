#include <stdio.h>

/**
 * main - Lists all the natural numbers below 1024 (excluded)
 *        that are multiples of 3 or 5.
 *
 * Return: Always 0.
 */
int main(void)
{
int nm, sum = 0;

for (nm = 0; nm < 1024; nm++)
{
if ((nm % 3) == 0 || (nm % 5) == 0)
sum += nm;
}

printf("%d\n", sum);

return (0);
}

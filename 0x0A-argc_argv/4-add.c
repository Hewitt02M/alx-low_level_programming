#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the addition of positive numbers
 * @argc: The number of arguments
 * @argv: An array of pointers
 *
 * Return: If one of the numbers contains symbols that are non-digits - 1.
 *         Otherwise - 0.
 */
int main(int argc, char *argv[])
{
int qe1, q1, sum = 0;

for (qe1 = 1; qe1 < argc; qe1++)
{
for (q1 = 0; argv[qe1][q1]; q1++)
{
if (argv[qe1][q1] < '0' || argv[qe1][q1] > '9')
{
printf("Error\n");
return (1);
}
}

sum += atoi(argv[qe1]);
}

printf("%d\n", sum);

return (0);
}

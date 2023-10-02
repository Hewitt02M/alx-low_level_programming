#include <stdio.h>

/**
 * main - Prints all arguments it receives.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int n;
for (n = 0; n < argc; n++)
printf("argv[%2d]: %s\n", n, argv[n]);

return (0);
}

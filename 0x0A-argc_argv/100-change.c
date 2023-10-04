#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the number of arguments is not exactly one - 1.
 *         Otherwise - 0.
 */
int main(int argc, char *argv[])
{
int penny, coins = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}

penny = atoi(argv[1]);

while (penny > 0)
{
coins++;
if ((penny - 25) >= 0)
{
penny -= 25;
continue;
}
if ((penny - 10) >= 0)
{
penny -= 10;
continue;
}
if ((penny - 5) >= 0)
{
penny -= 5;
continue;
}
if ((penny - 2) >= 0)
{
penny -= 2;
continue;
}
penny--;
}

printf("%d\n", coins);

return (0);
}

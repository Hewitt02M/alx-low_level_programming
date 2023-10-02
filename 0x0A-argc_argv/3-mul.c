#include <stdio.h>
#include <stdlib.h>

/**
  * main - Prints the multiplication of two args numbers
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always zero
  */
int main(int argc, char *argv[])
{
int qe1 = 0, qe2 = 0;

if (argc == 3)
{
qe1 = atoi(argv[1]);
qe2 = atoi(argv[2]);
printf("%d\n", qe1 *qe2);
}
else
{
printf("Error\n");
return (1);
}

return (0);
}

#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 *
 * Return: If width <= 0, height <= 0, or the function fails - NULL.
 *         Otherwise - a pointer to the 2-dimensional array
 */
int **alloc_grid(int width, int height)
{
int **twoD;
int ih, iw;

if (width <= 0 || height <= 0)
return (NULL);

twoD = malloc(sizeof(int *) * height);

if (twoD == NULL)
return (NULL);

for (ih = 0; ih < height; ih++)
{
twoD[ih] = malloc(sizeof(int) * width);

if (twoD[ih] == NULL)
{
for (; ih >= 0; ih--)
free(twoD[ih]);

free(twoD);
return (NULL);
}
}

for (ih = 0; ih < height; ih++)
{
for (iw = 0; iw < width; iw++)
twoD[ih][iw] = 0;
}

return (twoD);
}

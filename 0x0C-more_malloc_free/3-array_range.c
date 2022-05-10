#include "main.h"
/**
 * array_range - Print array from min to max
 * @min: int smallest no in the array
 * @max: int largest no in the array
 *
 * Return: array int
 */
int *array_range(int min, int max)
{
int *range;
int i, j, k;

if (min > max)
return (NULL);

k = max - min + 1;
range = malloc(sizeof(int) * k);

if (range == NULL)
return (NULL);

for (i = min, j = 0; i <= max; i++, j++)
range[j] = i;

return (range);
}




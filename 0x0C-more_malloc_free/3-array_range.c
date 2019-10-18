#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: min
 * @max: max
 * Return: a pointer
 */
int *array_range(int min, int max)
{
int *ptr, i;
int minmaxtotal;
if (min > max)
{
return (NULL);
}
minmaxtotal = max - min;
ptr = malloc(sizeof(int) * (minmaxtotal + 1));
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i <= minmaxtotal; i++)
{
ptr[i] = min++;
}
return (ptr);
}

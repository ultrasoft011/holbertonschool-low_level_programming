#include "holberton.h"
#include <stdlib.h>
/**
*array_range - creates an array of integers
*@min: min value
*@max: max value
*Return: pointer to the newly created array
*/
int *array_range(int min, int max)
{
int *ptr;
int i = 0;
if (min > max)
{
return (NULL);
}
int minmaxtotal = (max - min) + 1;
ptr = malloc(sizeof(int) * (minmaxtotal));
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

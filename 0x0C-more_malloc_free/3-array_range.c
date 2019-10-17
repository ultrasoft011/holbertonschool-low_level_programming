#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
*array_range - creates an array of integers
*@min: min value
*@max: max value
*Return: pointer to the newly created array
*/
int *array_range(int min, int max)
{

int *ptr;
int i = 0, j = 0;
if (min > max)
{
return (NULL);
}
ptr = (int *)malloc(min * max);
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < max; ++i)
{
min = i;
for (j = i + 1; j < max; ++j)
{
if (ptr[j] < ptr[min])
min = j;
}
if (min != i)
{
int temp;
temp = ptr[i];
ptr[i] = ptr[min];
ptr[min] = temp;
}
}
return (ptr);
}

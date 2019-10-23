#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
* int_index - search a integer
* @array: the array
* @cmp: Pointer to a function
* @size: the size of the elements
* Return: returns the index of the first element
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int count = 0;

if (size <= 0)
{
	return (-1);
}
if (array != NULL && *cmp != NULL)
{
	for (count = 0; size > count; count++)
	{
		if (cmp(array[count]))
		{
		return (count);
		}
	}
}
return (-1);
}

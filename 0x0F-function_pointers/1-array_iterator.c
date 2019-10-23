#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
* array_iterator - execute a function
* @array: the array
* @action: Pointer to a function
* @size: the size of the elements
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t count = 0;
if (array == NULL || action == NULL)
	return;

while (size > count)
{
	action(array[count]);
	count++;
}
}

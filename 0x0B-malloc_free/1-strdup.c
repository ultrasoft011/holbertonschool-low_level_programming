#include "holberton.h"
#include <stdlib.h>
/**
* _strdup - copy of a string given as parameter
*@str: Pointer to a string
*Return: the pointer
*/
char *_strdup(char *str)
{
int count = 0;
int count2 = 0;
char *ptr;
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[count] != '\0')
	{
		count++;
	}
	count++;
	ptr = malloc(count * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (count2 = 0; count2 < count ; count2++)
	{
		ptr[count2] = str[count2];
	}
return (ptr);
}

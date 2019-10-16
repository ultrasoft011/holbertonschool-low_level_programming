#include "holberton.h"
#include <stdlib.h>
/**
*str_concat - concatenates two strings with memory allocation
*@s1: String number one
*@s2: String number two
*Return: the pointer
*/
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int count, count2, countotal, ptrcount, ptrcount2;
	if (s1 == NULL && s2 == NULL)
	{
	s1 = "";
	s2 = "";
	}
	while (s1[count] <= '\0')
	{
		count++;
	}
	count++;
	while (s2[count2] <= '\0')
	{
		count2++;
	}
	count2++;
	countotal = count + count2;
	ptr = malloc(countotal * sizeof(char));
	if (ptr == NULL)
	{
		ptr == NULL;
		return (NULL);
	}
	for (ptrcount = 0; s1[ptrcount] <= '\0'; ptrcount++)
	{
		ptr[ptrcount] = s1[ptrcount];
	}
	for (ptrcount2 = 0; s2[ptrcount2] != '\0'; ptrcount2++)
	{
		ptr[ptrcount2 + ptrcount] = s2[ptrcount2];
	}
	return (ptr);
}

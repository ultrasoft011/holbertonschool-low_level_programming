#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
*str_concat - concatenates two strings with memory allocation
*@s1: String number one
*@s2: String number two
*Return: the pointer
*/
char *str_concat(char *s1, char *s2)
{
<<<<<<< HEAD
	char *ptr;
	int count = 0, count2 = 0, countotal, ptrcount = 0, ptrcount2 = 0;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	while (s1[count])
	{
		count++;
	}
	while (s2[count2])
=======
	char *ptr = NULL;
	int count, count2, countotal, ptrcount, ptrcount2;
	if (s1 == NULL)
	{	
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}
	while (s1[count] != '\0')
	{
		count++;
	}
	count++;
	while (s2[count2] != '\0')
>>>>>>> 54ad4ce988e5f842d61ab1f52f88182b55861a18
	{
		count2++;
	}
	countotal = count + count2;
	ptr = malloc((countotal + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
<<<<<<< HEAD
	for (ptrcount = 0; ptrcount < count; ptrcount++)
	{
		ptr[ptrcount] = s1[ptrcount];
	}
	for (ptrcount2 = 0; ptrcount2 < count2; ptrcount2++)
=======
	for (ptrcount = 0; ptrcount <= count; ptrcount++)
	{
		ptr[ptrcount] = s1[ptrcount];
	}
	for (ptrcount2 = 0; ptrcount2 <= count2; ptrcount2++)
>>>>>>> 54ad4ce988e5f842d61ab1f52f88182b55861a18
	{
		ptr[count + ptrcount2]  = s2[ptrcount2];
	}
	ptr[count + ptrcount2] = '\0';
	return (ptr);
}

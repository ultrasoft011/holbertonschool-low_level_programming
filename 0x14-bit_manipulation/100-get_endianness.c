#include <stdio.h>
#include "holberton.h"
/**
*get_endianness - get the endianness
*Return: An integer
*/
int get_endianness(void)
{
	int x = 1;
	char *y = (char *) &x;

	if (*y)
	{
		return (1);
	}
	else
		return (0);
}

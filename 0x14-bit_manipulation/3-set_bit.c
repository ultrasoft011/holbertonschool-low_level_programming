#include <stdio.h>
#include "holberton.h"
/**
*set_bit - get a bit
*@n: Variable n
*@index: Position
*Return: An integer
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
	{
		return (-1);
	}
	*n = *n | (1 << index);
	return (1);
}

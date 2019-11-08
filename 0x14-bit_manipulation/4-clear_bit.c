#include <stdio.h>
#include "holberton.h"
/**
*clear_bit - clear a bit
*@n: Variable n
*@index: Position
*Return: An integer
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
	{
		return (-1);
	}
	*n = *n & ~(1 << index);
	return (1);
}

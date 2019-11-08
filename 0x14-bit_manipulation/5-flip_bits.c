#include <stdio.h>
#include "holberton.h"
/**
*flip_bits - clear a bit
*@n: Variable n
*@m: the next position
*Return: An integer
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int f, y = 0;

	f = n ^ m;

	while (f > 0)
	{
		if ((f & 1) != 0)
			y++;

		f = f >> 1;
	}
	return (y);
}

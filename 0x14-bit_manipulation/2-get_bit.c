#include <stdio.h>
#include "holberton.h"
/**
*get_bit - get a bit
*@n: Variable n
*@index: Position
*Return: An integer
*/
int get_bit(unsigned long int n, unsigned int index)
{
if (n == '\0' && index == '\0')
{
	return (-1);
}
if ((n >> index) & 1)
{
	return (1);
}
else
{
	return (0);
}
return (n);
}

#include <stdio.h>
#include "holberton.h"
int _pow_recursion(int x, int y);
/**
*binary_to_uint - Write a function converts a binary
*@b: the pointer to the string
*Return: Unsigned int
*/
unsigned int binary_to_uint(const char *b)
{
int i = 0, j, sum = 0, x;

if (b == NULL)
	return (0);

while (b[i] != '\0')
{
i++;
}
for (j = 0; b[j]; j++)
{
	if (b[j] == 48)
	{
		x = 0;

	}
	else if (b[j] == 49)
	{
		x = 1;
	}
	else
	{
		return (0);
	}
	sum += _pow_recursion(2, i - 1) * x;
	i--;
}
return (sum);
}
/**
*_pow_recursion - pow a number
*@x: Variable x
*@y: Varaible y
*Return: if y is lower return -1 means an error
*/
int _pow_recursion(int x, int y)
{
if (y == 0)
{
return (1);
}
if (y < 0)
{
return (-1);
}
else if (y > 0)
{
return ((x * _pow_recursion(x, y - 1)));
}
else
{
return (1 / _pow_recursion(x, -y));
}
}

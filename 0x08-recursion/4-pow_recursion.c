#include "holberton.h"
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

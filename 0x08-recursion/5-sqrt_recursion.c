#include "holberton.h"

/**
 *sqrtfun - recursion functions
 *@n: variable
 *@i: counter variable
 *Return: value
 */

int sqrtfun(int n, int i)
{
if (i * i == n)
{
return (i);
}
if (i < n / 2)
{
return (sqrtfun(n, i + 1));
}
if (n % 2 != 0)
{
return (-1);
}
return  (1);
}

/**
 *_sqrt_recursion - returns the natural square root of a number
 *@n: variable
 *Return: value
 */

int _sqrt_recursion(int n)
{
int i = 1;

if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (0);
}
return (sqrtfun(n, i));
}

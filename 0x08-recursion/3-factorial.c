#include "holberton.h"
/**
*factorial - print a factorial of a number
*@n: Variable
*Return: -1 if is an error
*/
int factorial(int n)
{
if (n == 0)
{
return (1);
}
else
{
if (n < 0)
{
return (-1);
}
}
return ((n * factorial(n - 1)));
}

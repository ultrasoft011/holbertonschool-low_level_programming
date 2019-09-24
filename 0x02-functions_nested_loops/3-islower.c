#include "holberton.h"
/**
 *_islower - recognize lowercase
 *@c: First operand
 *Return: 1 if c is uppercase and 0 if is lowercase
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}

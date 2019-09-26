#include "holberton.h"
/**
 *_isalpha - recognize letters and numbers
 *@c: First operand
 *Return: 1 if c is a letter 0 if is a number
 */
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
return (0);
}
}

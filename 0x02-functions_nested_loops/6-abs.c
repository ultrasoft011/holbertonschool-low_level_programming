#include "holberton.h"
/**
 *_abs - absolute number
 *@f: First operand
 *Return: absolute number f
 */
int _abs(int f)
{
if (f > 0)
{
return (f);
}
else
f = (f * -1);
return (f);
}

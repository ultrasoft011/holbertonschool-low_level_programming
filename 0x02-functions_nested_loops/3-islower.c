#include "holberton.h"
/**
 *_islower - recognize lowercase
 *@c: First operand
 *Return:
 */
int _islower(int c)
{
if (c  >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}

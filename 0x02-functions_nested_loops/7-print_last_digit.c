#include "holberton.h"
/**
 *print_last_digit - prints last digit
 *@r: First operand
 *Return: the number
 */
int print_last_digit(int r)
{
r = r % 10;
if (r < 0)
{
r= (r* -1);
}
_putchar('0' + r);
return (r);
}

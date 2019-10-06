#include "holberton.h"
/**
* *print_number - prints an intenger
*@n: Variable
*/
void print_number(int n);
{
if (n < 0)
{
_putchar('-' + '0');
n = -n;
}
if (n == 0)
{
_putchar('0');
}
if (n / 10)
{
n = (n / 10);
_putchar(n % 10 + '0');
}
}

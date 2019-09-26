#include "holberton.h"
/**
 *more_numbers - 10 times
 *Return:
 */
void more_numbers(void)
{
int b = 0;
while (b < 10)
{
int a = 0;
while (a <= 14)
{
if (a > 9)
_putchar(a / 10 + '0');
_putchar(a % 10 + '0');
a++;
}
_putchar('\n');
b++;
}
return;
}

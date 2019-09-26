#include "holberton.h"
/**
 *times_table - 0 table
 *Return:
 */
void times_table(void)
{
int n, p, k;
for (n = 0 ; n <= 9; n++)
{
for (p = 0 ; p <= 9; p++)
{
k = (n * p);
if (k <= 9)
{
if (p != 0)
{
_putchar(' ');
_putchar(' ');
}
_putchar(k + '0');
}
else
{
_putchar(' ');
_putchar(k / 10 + '0');
_putchar(k % 10 + '0');
}
if (p != 9)
{
_putchar(',');
}
}
_putchar('\n');
}
}

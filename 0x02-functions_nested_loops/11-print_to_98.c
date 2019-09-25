#include <stdio.h>
#include "holberton.h"
/**
 *print_to_98 - 98 number
 *@n: First variable
 *Return:
 */
void print_to_98(int n)
{
if (n < 98)
{
for (; n <= 98; n++)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
}
}
printf("\n");
}
else if (n > 98)
{
for (; n >= 98; n--)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
}
}
printf("\n");
}
else
{
printf("%d", n);
printf("\n");
}
}

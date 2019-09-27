#include "holberton.h"
/**
 *print_triangle - triangle
 *@size: Variable 1
 */
void print_triangle(int size)
{
int i, j, k, esp;
if (size <= 0)
{
_putchar ('\n');
}
for (i = 1; i <= size; i++)
{
esp = size - i;
for (j = 1; j <= esp; j++)
{
_putchar(' ');
}
for (k = 1; k <= i; k++)
{
_putchar('#');
}
_putchar('\n');
}
}

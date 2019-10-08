#include <stdio.h>
#include "holberton.h"
/**
**print_diagsums - print diagonals of a matrix
*@a: Pointer to a
*@size: Variable
*/
void print_diagsums(int *a, int size)
{
int i, j;
int x = 0;
int y = 0;
for (i = 0; i < size; i++)
{
x += a[(size + 1) * i];
}
for (j = 0; j < size; j++)
{
y += a[(size - 1) * (j + 1)];
}
printf("%d, %d\n", x, y);
}

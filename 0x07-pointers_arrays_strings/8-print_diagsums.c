#include <stdio.h>
#include "holberton.h"
/**
**print_diagsums - print diagonals of a matrix
*@a: Pointer to a
*@size: Variable
*/
void print_diagsums(int *a, int size)
{
int i = 0;
int j = 0;
int conta, contb;
for (i = 0; i < size;  i++)
{
conta = conta + a[(size + 1) * i];
}
for (j = 0; j < size; j++)
{
contb = contb + a[(size - 1) * (j + 1)];
}
printf("%d, %d\n", conta, contb);
}
